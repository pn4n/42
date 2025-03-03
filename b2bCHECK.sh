#!/bin/bash


in_passconf() {
        pam=$(grep -E '^password\s+requisite\s+pam_pwquality.so' "/etc/pam.d/common-password")
        if [[ "$pam" =~ "$1" ]]; then
                count=$(grep -c "$1" "/etc/pam.d/common-password")
                echo "✅$1($count)"
        else
                echo "❌$1(hueta)"
        fi
        }

if [ $EUID != 0 ]; then
        echo -e "\n#      APPARMOR      #"
        systemctl is-enabled apparmor

        echo -e "\n#      HOSTNAME      #"
        hostname

        echo -e "\n#       GROUPS       #"
        if id $USER &>/dev/null; then
            echo "$USER exists."
        else
            echo "[---] $USER is missing!"
        fi
        echo -e "Groups for $USER:\n"
        groups $USER

        echo -e "\n#        UFW         #"
        sudo ufw status numbered

        echo -e "\n#        SSH         #"
        systemctl is-active ssh
        sudo grep "Port" /etc/ssh/sshd_config

        sudo grep "PermitRootLogin no" /etc/ssh/sshd_config || echo "[---] root login is NOT disabled"

        echo -e "\n#     PARTITIONS     #"
        lsblk

        echo -e "\n#       CRON         #"
        crontab -l

        echo -e "\n! run me with sudo !\n"
else
        echo -e "\n#      SUDOLOGS      #"
        if [ -d "/var/log/sudo" ]; then
                echo "Sudo logs exist."
        	ls -l /var/log/sudo/
		cat sudo_config
        else
                echo "[---] sudo logs are missing!"
        fi

        echo -e "\n#        CRON        #"
        crontab -l

        echo -e "\n#    PASS POLICY     #\n"

        grep -E '^password\s+requisite\s+pam_pwquality.so' /etc/pam.d/common-password | grep -e 'minlen=10'
	echo ""
        
        in_passconf "retry=3"
	in_passconf "minlen=10"
        in_passconf "ucredit=-1"
        in_passconf "lcredit=-1"
        in_passconf "dcredit=-1"
        in_passconf "usercheck=1"
        in_passconf "maxrepeat=3"
        in_passconf "difok=7"
        in_passconf "enforce_for_root"

	OUTPUT=$(chage -l "$USER")
	PASS_MIN_DAYS=$(echo "$OUTPUT" | sed -n '5p' | awk -F: '{print $2}' | xargs)
	PASS_MAX_DAYS=$(echo "$OUTPUT" | sed -n '6p' | awk -F: '{print $2}' | xargs)
	PASS_WARN_DAYS=$(echo "$OUTPUT" | sed -n '7p' | awk -F: '{print $2}' | xargs)

	if [[ "$PASS_MIN_DAYS" -eq "2" && "$PASS_MAX_DAYS" -eq "30" && "$PASS_WARN_DAYS" -eq "7" ]]; then
	    echo "✅chage ok"
	else
	    echo "❌chage ne ok\n\tmin:$PASS_MIN_DAYS\tmax:$PASS_MAX_DAYS\twarn:$PASS_WARN_DAYS"
	fi

        echo -e "\n! run me without sudo !\n"
fi



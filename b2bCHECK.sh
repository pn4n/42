###!/bin/bash

if [[ $EUID -ne 0 ]]; then
	echo -e "\n#	  APPARMOR	#"
	systemctl is-enabled apparmor

        echo -e "\n#      HOSTNAME      #"
        hostname

        echo -e "\n#       GROUPS       #"
        if id $USER &>/dev/null; then
            echo "$USER exists."
        else
            echo "[---] $USER is missing!"
        fi
        echo "Groups for $USER:\n"
        groups $USER

        echo -e "\n#        UFW         #"
        sudo ufw status numbered

        echo -e "\n#        SSH         #"
        systemctl is-active ssh
        sudo grep "Port" /etc/ssh/sshd_config

        sudo grep "PermitRootLogin no" /etc/ssh/sshd_config || echo "[---] root login is NOT disabled"

        echo -e "\n#	 PARTITIONS	#"
        lsblk

        echo -e "\n#       CRON         #"
        crontab -l

        echo -e "! run me with sudo !\n"
else
        echo -e "\n#      SUDOLOGS      #"
        if [ -d "/var/log/sudo" ]; then
                echo "Sudo logs exist."
        ls -l /var/log/sudo/
        else
                echo "[---] sudo logs are missing!"
        fi

        echo -e "\n#        CRON        #"
        crontab -l

        echo -e "! run me without sudo !\n"
fi

echo -e "\n=====        DONE    ====="




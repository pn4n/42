#BORN2BEROOT
    0. minimal installation
    1. update sources.list
    2. apt-get install sudo ssh ufw cron
    3?. sudo apt update
sudo apt install build-essential dkms linux-headers-$(uname -r) perl


/Applications/VirtualBox.app/Contents/MacOS/VBoxGuestAdditions.iso


HIDE MSOFTCENTER

com.disable.msoftcenter.plist:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>Label</key>
    <string>com.disable.msoftcenter</string>
    <key>ProgramArguments</key>
    <array>
        <string>/usr/bin/defaults</string>
        <string>write</string>
        <string>com.apple.notificationcenterui</string>
        <string>doNotDisturb</string>
        <string>1</string>
    </array>
    <key>RunAtLoad</key>
    <true/>
</dict>
</plist>
```


launchctl load ~/Library/LaunchAgents/com.disable.msoftcenter.plist



b1!4J8*l_y
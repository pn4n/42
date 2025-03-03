import telebot
from telebot import types

bot = telebot.TeleBot("TOKEN", parse_mode=None) 

button_labels = [
    "vm definition", "lvm definition", "apparmor definition",
    "rocky vs debian", "apt vs aptitude", "ssh", "ufw", "cron", "wall"
]

@bot.message_handler(func=lambda msg: msg.text.startswith("vm") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""A virtual machine emulates a physical computer using software, running an OS independently from the host system.
	
	With virtual machines we can create virtual devices that will behave in the same way as physical devices, using their own CPU, memory, network interface and storage. This is possible because the virtual machine is hosted on a physical device, which is the one that provides the hardware resources to the VM. 
	The software program that creates virtual machines is the hypervisor. The hypervisor is responsible for isolating the VM resources from the system hardware and making the necessary implementations so that the VM can use these resources.
	
	The hypervisor uses a part of the host machine's CPU, storage, etc., and distributes them among the different VMs.
	
	PURPOSE
	The main purpose of VMs is to operate multiple operating systems at the same time, from the same piece of hardware. Without virtualization, operating multiple systems — like Windows and Linux — would require two separate physical units.""")


@bot.message_handler(func=lambda msg: msg.text.startswith("lvm") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
	LVM (Logical Volume Manager) is an abstraction layer between a storage device and a file system. We get many advantages from using LVM, but the main advantage is that we have much more flexibility when it comes to managing partitions. Suppose we create four partitions on our storage disk. If for any reason we need to expand the storage of the first three partitions, we will not be able to because there is no space available next to them. In case we want to extend the last partition, we will always have the limit imposed by the disk. In other words, we will not be able to manipulate partitions in a friendly way. Thanks to LVM, all these problems are solved.
By using LVM, we can expand the storage of any partition (now known as a logical volume) whenever we want without worrying about the contiguous space available on each logical volume. We can do this with available storage located on different physical disks (which we cannot do with traditional partitions). We can also move different logical volumes between physical devices. Of course, services and processes will work the same way they always have. But to understand all this, we have to know:

    Physical Volume (PV): physical storage device. It can be a hard disk, an SD card, a floppy disk, etc. This device provides us with storage available to use.
    Volume Group (VG): to use the space provided by a PV, it must be allocated in a volume group. It is like a virtual storage disk that will be used by logical volumes. VGs can grow over time by adding new VPs.
    Logical volume (LV): these devices will be the ones we will use to create file systems, swaps, virtual machines, etc. If the VG is the storage disk, the LV are the partitions that are made on this disk.

	""")


@bot.message_handler(func=lambda msg: msg.text.startswith("apparmor") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
	AppArmor provides Mandatory Access Control (MAC) security. In fact, AppArmor allows the system administrator to restrict the actions that processes can perform. For example, if an installed application can take photos by accessing the camera application, but the administrator denies this privilege, the application will not be able to access the camera application. If a vulnerability occurs (some of the restricted tasks are performed), AppArmor blocks the application so that the damage does not spread to the rest of the system.
In AppArmor, processes are restricted by profiles. Profiles can work in complain-mode and in enforce-mode. In enforce mode, AppArmor prohibits applications from performing restricted tasks. In complain-mode, AppArmor allows applications to do these tasks, but creates a registry entry to display the complaint.
	""")

@bot.message_handler(func=lambda msg: msg.text.startswith("apt vs aptitude") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
	In Debian-based OS distributions, the default package manager we can use is dpkg. This tool allows us to install, remove and manage programs on our operating system. However, in most cases, these programs come with a list of dependencies that must be installed for the main program to function properly. One option is to manually install these dependencies. However, APT (Advanced Package Tool), which is a tool that uses dpkg, can be used to install all the necessary dependencies when installing a program. So now we can install a useful program with a single command.
APT can work with different back-ends and fron-ends to make use of its services. One of them is apt-get, which allows us to install and remove packages. Along with apt-get, there are also many tools like apt-cache to manage programs. In this case, apt-get and apt-cache are used by apt. Thanks to apt we can install .deb programs easily and without worrying about dependencies. But in case we want to use a graphical interface, we will have to use aptitude. Aptitude also does better control of dependencies, allowing the user to choose between different dependencies when installing a program.
	""")

@bot.message_handler(func=lambda msg: msg.text.startswith("rocky") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
Rocky

    Rocky is more stable than Debian and supports enterprise applications.
    Does not have an upgrade path.
    It comes with many security in-built features that help protect from cyber-attacks using SELinux. It helps to reduce the vulnerabilities of privilege escalation attacks.

Debian

    Released and supported by the community
    Debian has more software/packages available.
    Debian community members still maintain it.
    It comes with an easy installation package.

	""")

@bot.message_handler(func=lambda msg: msg.text.startswith("ssh") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
	SSH or Secure Shell is a remote administration protocol that allows users to control and modify their servers over the Internet thanks to an authentication mechanism. Provides a mechanism to authenticate a user remotely, transfer data from the client to the host, and return a response to the request made by the client.

	SSH uses encryption techniques to ensure that all client-to-host and host-to-client communications are done in encrypted form. One of the advantages of SSH is that a user using Linux or MacOS can use SSH on their server to communicate with it remotely through their computer's terminal. Once authenticated, that user will be able to use the terminal to work on the server.
	""")

@bot.message_handler(func=lambda msg: msg.text.startswith("ufw") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
	UFW (Uncomplicated Firewall) is a software application responsible for ensuring that the system administrator can manage iptables in a simple way. Since it is very difficult to work with iptables, UFW provides us with an interface to modify the firewall of our device (netfilter) without compromising security. Once we have UFW installed, we can choose which ports we want to allow connections, and which ports we want to close. This will also be very useful with SSH, greatly improving all security related to communications between devices.
	""")

@bot.message_handler(func=lambda msg: msg.text.startswith("cron") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
	Cron: Linux task manager that allows us to execute commands at a certain time. We can automate some tasks just by telling cron what command we want to run at a specific time. For example, if we want to restart our server every day at 4:00 am, instead of having to wake up at that time, cron will do it for us.
	""")

@bot.message_handler(func=lambda msg: msg.text.startswith("wall") )
def send_welcome(message):
	bot.send_message(message.chat.id, 
	"""
Wall: command used by the root user to send a message to all users currently connected to the server. If the system administrator wants to alert about a major server change that could cause users to log out, the root user could alert them with wall.
	""")


@bot.message_handler(func=lambda msg: True)
def send_welcome(message):
	markup = types.ReplyKeyboardMarkup(row_width=1)
	buttons = [types.KeyboardButton(label) for label in button_labels]
	for i in range(0, len(buttons)):
		markup.add(buttons[i]) 

	bot.send_message(message.chat.id, "Choose the topic:", reply_markup=markup)


bot.infinity_polling()

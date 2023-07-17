# PROJECT OVERVIEW

  ### 1. How a virtual box works:

  It is a resource that uses software instead of a physical computer resources/recursos to run programs or apps.

  Each VM has **its own operating system and functions separately**, so you can have more than one VM per machine. 
  It can be used to test applications in a safe, separate environment. It works by using software to simulate virtual 
  hardware and run on a host machine.

  ### 2. The choice of operating system - Debian:

  Debian is easier to install and configure. Because of this it is better for personal \*server.

  *a computer or computer program which manages access to a centralised resource or service in a network.

  ### 3. The basic differences between CentOS and Debian:

  Both are Linux operating systems:

   **CentOS**
   
      - More difficult to upgrade
      - CentOS does not support many different architectures
      - More stable and supported by a large community
      - It does not have an easy GUI (Graphic User Interface)
      - It is a free downstream rebuild of the commercial Red Hat Enterprise Linux distribution

   **Debian**

      - Is made up of open source components
      - It has less market preference
      - Generally has more up to date packages and is easier to upgrade to a newer version
      - It has desktop friendly applications and GUI (Graphic User Interface)
      - It is a free downstream distribution that is the base for other distributions, 
        including the Ubuntu Linux distribution

   ### 4.  Purpose of a virtual machine:

    It allows a business to run an operating system that behaves like a completely separate computer 
    in an app window on a desktop. It is also used to test applications in different operating systems. 
    For instance, if one has a Windows PC but the created app is for Linux, with a virtual machine, 
    it can be quickly created, tested and gotten rid of.

   ### 5. If chosen Debian, the difference between aptitude and apt, and what APPArmor is:

   **Package managers:**

   **Apt**  = Advanced Packaging Tool

       - More global, it uses more secure packages
       - It's the Aptitude base
       - Free and open source software
       - Is a lower-level packages
       - Handles software installation and removal
       - Is a whole command line with no GUI

   **Aptitude**
   
       - It's more accurate and exact when looking for a specific version
       - It has more options than Apt
       - Is a front-end to advanced packaging tool which adds a user interface to the functionality
       - Is a higher-level package managers that abstracts low level details

   **What is AppArmor** - a security module that allows to implement a more restrictive policies 

       - Is a mandatory Access Control (MAC) system which is a kernel (LSM) enhancement to confine programs 
         to a limited set of resources.
       - Is an effective and easy-to-use Linux application security system
       - Allows the system administrator to restrict programs' capabilities with per-program profiles
         _sudo aa-status_

## SIMPLE CHECK

    - No graphical user interface
    - Password requested on boot up
    - Login with mmonclus (no root)
    - Password must follow rules
    - Script running every 10min

  ### 1. Check that the UFW service is started:

    It is a firewall. # It is an IPs controller. It is useful along with SSH

    _sudo ufw status_ # I need to use sudo even if I'm in root

  ### 2. Check that the SSH service is started:

   _ssh mmonclus@localhost -p 4242_
   
   _systemctl status ssh #_ _sudo_ is not necessary in my profile or working within sudo

  ### 3. Check that the chosen operating system (Debian or CentOS):

   _cat /etc/os-release_

## USER

  ### 1. Login (mmonclus) of the student being evaluated. It has been added and that it belongs to the "sudo" and "user42" groups:

   _getent group sudo_
   
   _getent group user42_
   
    OR
    
   _groups mmonclus_

  ### 2. Password policy has been put in place by following the following steps:

   (_passwd →_ to change current user password)

   **a) Create a new user:**

   _sudo adduser new\_user_ → To add a user named new\_user
   
   _groups new\_user →_ check if using command above
   
   (_sudo deluser new\_user_ → To delete the user new\_user)
   

  **b) Assign a password,respecting the subject rules. Explain how to set up the rules requested in the subject on their virtual machine:**

        1. _nano /etc/login.defs_ → password expiry (line 160 and 161)
        2. _nano /etc/pam.d/common-password_ → password policy (line 25)

        Password requisite pam\_pwquality.so retry=3 minlen=10 ucredit=-1 dcredit=-1 maxrepeat=3 reject\_username difok=7 enforce\_for\_root

          _ucredit_ = maximum number of uppercase characters that will generate a credit. If it will be 1 instead of -1, 
           it will be asking for the password to have only one uppercase character
          _dcredit_ = maximum number of digits that will generate a credit
          _difok_ = the minimum number of characters that must be different from the old password

     - Create a group named "evaluating" and assign it to this user. Finally, check that this user belongs to the "evaluating" group.

          _Sudo addgroup evaluating_
          _Sudo usermod -aG evaluating mmonclus (__\*usermod=to modify / -aG=to the desire group)_
          # NOW reboot the VM
          To check to which groups mmonclus has been added:
          _groups mmonclus_ OR _getent group evaluating_
          (_sudo delgroup evaluating_→ To delete a group)

     - Advantages of this password policy, as well as the advantages and disadvantages of its implementation.

          The main benefits of this password policy is that it enforces the use of unique passwords that makes it harder to crack. 
          The greater the amount of requirements, the higher the number of possible combinations of letters, numbers and characters.
          However, it is not always successful, the "difficult to crack", partly because of the diminishing returns involved in 
          increasing complexity.
          
          Summarising, a more complex password is harder to crack as the number of combinations is extremely high, but for the user, 
          it gets more complex to remember it and write it as well.

## HOSTNAME AND PARTITIONS

  ### 1. Check that the hostname of the machine is correctly formatted as follows: login42** (login of the student being evaluated → mmonclus42):

   _uname -n_
   
      OR
      
   _hostname_

  ### 2. Modify this hostname by replacing the login with yours, then restart the machine (it should have the new hostname):
  
   _sudo nano /etc/hostname_ → change it to new\_user42
   
   _sudo reboot_

  ### 3. You can now restore the machine to the original hostname:

   _sudo nano /etc/hostname_ → change it to mmonclus42
   
   _sudo reboot_ → log in as mmonclus

  ### 4. View the partitions (if the student evaluated makes the bonuses, it will be necessary to refer to the bonus example:)

     _Lsblk_
      - _Root + swap + home (normal partition of the machine)_
      - _\* + var + srv + tmp + vaar–log (partitions for the project bonus)_

  ### 5. How LVM works and what it is all about:

  **LVM** # Logical Volume Manager

  It allows us to easily manipulate the partitions or logical volume on a storage/drive device.

  It is a form of storage virtualisation that offers system administrators a more flexible approach 
  to managing disk storage space than traditional partitioning.

   The goal of LVM is to facilitate managing the sometimes conflicting storage needs of multiple end users.

## SUDO

### 1. The subject imposes strict rules for sudo:

  a) _ **Explain the value and operation of sudo using examples of their choice.** _

    It provides administrator permissions to a normal user, temporarily. In other words, the sudo command 
    temporarily elevates privileges allowing users to complete sensitive tasks without logging in as the root user.

    Sudo stands for **S** uper **U** ser **DO** and is used to access restricted files and operations. 
    By default, Linux restricts access to certain parts of the system preventing sensitive files from being compromised

  b) _ **Show the implementation of the rules imposed by the subject.** _

   _sudo visudo_ → shows the privileges of root and %sudo.
   
    OR
    
   _sudo nano /etc/sudoers_#This file firstly informs its only for reading purposes, but it can be updated
   
        - Defaults passwd\_tries=3 # Max of 3 tries
        
        - Defaults badpass\_message="Wrong password, please try again :)" # personalised message
        
        - Defaults logfile="/var/log/sudo/sudo.log" # Where sudo interactions are saved
        
        - Defaults log\_input # Saves the inputs
        
        - Defaults log\_output # Saves the outputs
        
        - Defaults requiretty # Forces to have the TTY open - Linux terminal managers. Everything that goes out from the kernel. 
        
        It manages the input, output and communication with the kernel
        
   _sudo -l_ → shows who has permission for sudo

### 2. Check that the "sudo" program is properly installed on the virtual machine:

   _dpkg -l | grep sudo_

### 3. The student being evaluated should now show assigning your new user to the "sudo" group:

   _sudo adduser new\_user_
   
   _sudo usermod -aG sudo new\_user #_ usermod=to modify / -aG=to the desire group
   
   _Getent group sudo_ _#_ checks the users added to the sudo group

### 4. Verify that the "/var/log/sudo/" folder exists and has at least one file. Check the contents of the files in this folder. 
You should see a history of the commands used with sudo. Finally, try to run a command via sudo. See if the file (s) in the "/var/log/sudo/" 
folder have been updated:

   _cd /var/log/sudo/_# in this folder, one will find more than one file
   
   - sudo cat sudo.log → in this file, one will find the history of the sudo command

## UFW

### 1. The student being evaluated should explain to you basically what UFW is and the value of using it:

  **UFW** # Uncomplicated Firewall

  It is a firewall, an interface to modify the firewall of the device without compromising security. You use it to 
  configure which port to allow connections to and which ports to close. This is useful in conjunction with SSH, 
  it can set a specified port for it to work with.

  \* It's a firewall, it controls the IPs. Useful along with SSH

  UFW: Uncomplicated Firewall is a program for managing a netfilter firewall designed to be easy to use. It uses a command-line 
  interface consisting of small number of simple commands, and uses \*iptables for configuration.

  UFW aims to provide an easy interface for people unfamiliar with firewall concepts, while at the same time simplest complicated 
  iptables commands to help an administrator who knows what he or she is doing.

  \*iptables: in linux operating system, the firewalling is taken care of using netfilter, a kernel module that decides what packets 
  are allowed to come in or to go outside. _Iptables_ are just the interface to netfilter. The two might often be thought of as the 
  same thing. A better way would be to think of it as a back end and a front end.

  ### 2. Check that the "UFW" program is properly installed on the virtual machine:

   _sudo ufw status_
   
   _dpkg -l | grep ufw_

### 3. Check that it is working properly:

   _sudo service ufw status_

### 4. List the active rules in UFW. A rule must exist for port 4242:

   _sudo ufw status | grep 4242_
   
   _sudo ufw status →_ shows all the ports # port 80 allows going through the traffic with the http protocol 

### 5. Add a new rule to open port 8080. Check that this one has been added by listing the active rules:

   _sudo ufw allow 8080_
   
   _sudo ufw status_

### 6. Delete this new rule:

   _sudo ufw status numbered_
   
   _sudo ufw delete_ (and the number I want to delete, showed above)
   
    OR
    
   _sudo ufw delete allow 8080_
   

## SSH

### 1. Check that the SSH service is properly installed on the virtual machine:

   _dpkg -l | grep openssh-server_

### 2. Check that it is working properly:

   _sudo service ssh status_

### 3. Explain to you basically what SSH is and the value of using it:

  Secure Shell (ssh) is a cryptographic network protocol for operating network services securely over an unsecured network. 
  Typical applications include remote command-line, login, and remote command execution, but any network service can be secured with ssh.

  SSH provides password or public-key based authentication and encrypts connections between two network endpoints. It is a secure 
  alternative to legacy login protocols (such as telnet, rlogin) and insecure file transfer methods (such as FTP).

### 4. Verify that the SSH service only uses port 4242:

   _sudo service ssh status | grep listening_
    OR
   _sudo systemctl status ssh_
    OR
   _sudo nano /etc/ssh/sshd\_config_ _#_ or _cat_ instead of nano: check that _Port 4242_ & P_ermitRootLogin prohibit-password_ are on
    
    \* ssh = client
       sshd = domain. Incoming connection

### 5. Use SSH in order to log in with the newly created user(you have to make sure that you cannot use SSH with the "root" user)

   _ssh new\_user@localhost -p 4242_
   
   _ssh root@localhost -p 4242 → !! it should_ not work even if entering the right password

## SCRIPT MONITORING

### 1. What is "cron"?

    Cron job is a Linux command that schedules a program to run at a certain time in the future.

    The cron command-line utility, also known as cron job, is a job scheduler on Unix-like operating systems.
    Users who set up and maintain software environments use cron to schedule jobs (commands or shell scripts) 
    to run periodically at fixed times, dates, or intervals. It typically automates system maintenance or 
    administration-though its general-purpose nature makes it useful for things like downloading files from the
    Internet and downloading email at regular intervals.

### 2. How to set up the script to run every 10 mins

   _ **Create Script → cd /home/mmonclus/ → create monitoring.sh and add the script** _

   _sudo crontab -e →_ add \*/10 \* \* \* \* bash /home/mmonclus/monitoring.sh# it needs to be the _sudo crontab -e_, 
    not the user _crontab -e_, it needs to be in root because the script shows the sudo command tasks
    
   _sudo crontab -e →_ add \*/1 \* \* \* \* bash /home/mmonclus/monitoring.sh
   
   _sudo systemctl restart cron_
   

## 3. Make the script stop running after reboot without modifying it sudo

   _sudo crontab -e →_ remove the line \*/1 \* \* \* \* /home/mmonclus/monitoring.sh or comment it
   
    OR
    
   _sudo systemctl stop cron_ _# it will restart next time the VM is turned on_
   
    OR
    
   _sudo systemctl disable cron_
   
    Check the script still exists _( /home/mmonclus/ desde root OR just ls from mmonclus)(ls -la to check the rights and
    not modified) → monitoring.sh |_ toshows the script

### 4. Explanation of the monitoring script by showing the code:

    \* variables = with $, what is inside the parehtesis, (), is executed and is kept inside the variable

  **architecture**

        architecture=$(uname -a)

        Uname (short for unix name) is a computer program in Unix and Unix-like computer operating systems that 
        prints the name, version and other details about the current machine and the operating system running on it.

  **physical\_cpu**

        physical\_cpu=$(grep "physical id" /proc/cpuinfo | info | uniq | wc -l)

        \* nano /proc/cpuinfo
        The actual Physical Core that is present on a processor. The PC/laptop heart. All the programs need to be in 
        contact with the CPU → _cat /proc/cpuinfo_ (lists CPUs).

**virtual\_cpu**

        virtual\_cpu=$(grep processor /proc/cpuinfo | uniq | wc -l)

        If one's processor is multi-core, you need to know how many virtual processors you have. You can count by looking for 
        lines that start with "processor".

          - wc -l : amount of lines
          
          - uniq: filters out repeated lines in a file

**memory\_usage**

       RAM\_TOTAL=$(free -h | grep Mem | awk '{print $2}') # Disk total
       RAM\_USED=$(free -h | grep Mem | awk '{print $3}') # Disk used
       RAM\_PERC=$(free -k | grep Mem | awk '{printf("%.2f%%"), $3 / $2 \* 100}') # Disk percent used

**total\_disk**

       DISK\_TOTAL=$(df -h --total | grep total | awk '{print $2}') # Disk total
       DISK\_USED=$(df -h --total | grep total | awk '{print $3}') # Disk used
       DISK\_PERC=$(df -k --total | grep total | awk '{print $5}') # Disk percent used

**CPU\_load**

       CPU\_LOAD=$(top -bn1 | grep '^%Cpu' | xargs | awk '{printf("%.1f%%"), $2 + $4}')

**last\_boot**

       LAST\_BOOT=$(who -b | awk '{print($3 " " $4)}')
  
        \*last time the session was started

**lvm\_partitions**

       LVM=$(if [$(lsblk | grep lvm | wc -l) -eq 0]; then echo no; else echo yes; f\>

        \*Count lvm type partitions rom lsblk command output

**tcp\_connections**

        TCP=$(grep TCP /proc/net/sockstat | awk '{print $3}')

         \*Find line where first is TCP: and print third value which is the unise (in use) amount.
          Connection crontroller (in my case 3, html, ssh, fail2ban)

**user\_log\_in**

         USER\_LOG=$(who | wc -l)

            Or \*whoami

**ip\_address**

         IP\_ADDR=$(hostname -I | awk '{print $1}')

          \* hostname -I: flag to display IP address

**mac\_address**

         MAC\_ADDR=$(ip link show | grep link/ether | awk '{print $2}')

          \* Ip util with link object, then select line where link/ether is and print second column: MAC address.

**sudo\_commands\_count**

         SUDO\_LOG=$(cat /var/log/sudo/sudo.log | grep USER | wc -l)

**BONUS**

### 1. Partitions

   _lsblk_

### 2. Wordpress

localhost --> online

_lighttpd -v_ # to check it is correctly installed
_php -v_ # installed php version
_mariadb -v || systemctl status mariadb_ # status mariadb + exit

Port 80 = by default, the http port

_#_ port 80 allows go through traffic with the http protocol - TCP/IP

### 3. Fail2ban

An app written in Python to prevent intruders in a system. It works blocking and penalising the remote connections that 
try to access brute force.

   _sudo fail2ban-client status_
   _sudo fail2ban-client status ssh_
   _sudo tail -f /var/log/fail2ban.log_

    # to unban: look for the banned IP address (/var/log/fail2ban.log)/ _sudo fail2ban-client status sshd_ + _fail2ban-client set sshd unbanip "ip"_

![4242 (5)](https://user-images.githubusercontent.com/114074329/227785257-e54377a7-6ec5-4b0d-a7ae-51ef0e96013a.png)

## THE END AND GOOD LUCK!!

<p align="center">
  <img src="https://user-images.githubusercontent.com/114074329/227785268-89e65c1f-fb89-4e8d-ae5e-abb9394d0a75.png" width="700" height="550" />
 </p>


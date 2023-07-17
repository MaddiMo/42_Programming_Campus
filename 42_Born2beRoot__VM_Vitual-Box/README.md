# Born2beRoot - VM VIRTUAL BOX

<p align="center"> This project aims to introduce you to the wonderful world of virtualization  </p>

<p align="center">
  <img src="https://user-images.githubusercontent.com/43698378/138560926-41b9ed41-cd9c-4d35-96a0-bcffa25d0d3c.png" widht="150" height="300" />
</p>

## Followed General Guidelines for this project

### 1. You must choose as an operating system - the latest stable version of Debian.

#### Hostname

    • Check that the hostname of the machine is correctly formatted as follows: login42 (login of the student being evaluated).
    
    • Modify this hostname by replacing the login with evaluator's login, then restart the machine. If on restart,
      the hostname has not been updated, the evaluation stops here.
      
    • You can now restore the machine to the original hostname.
  
### 2. You must create at least 2 encrypted partitions using LVM

### 3. Encrypted partitions

No graphical interface

Since it is a matter of setting up a server, you will install the minimum of services. For this reason, a graphical interface is of no user here. It is therefore forbidden to install X.org or any other equivalent graphics server.
  
<p align="center">
    <img width="461" alt="Screen Shot 2023-03-09 at 4 27 46 PM" src="https://user-images.githubusercontent.com/114074329/224072117-22c9e170-f320-4498-8209-5a616fb8b082.png">
</p>

### 4. Sudo

      • Authentication using sudo has to be limited to 3 attempts in the event of an incorrect password.
      
      • A custom message of your choice has to be displayed if an error due to a wrong password occurs when using sudo.
    
      • Each action using sudo has to be archived, both inputs and outputs. The log file has to be saved in the /var/log/sudo/ folder.
      
      • The TTY mode has to be enabled for security reasons.
      
      • For security reasons too, the paths that can be used by sudo must be restricted.
        Example:
        /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin

### 5. SSH Service

**The SSH service will be running on port 4242 only. For security reasons, it must not be possible to connect using SSH as root**.
  
      • You have to configure your operating system with the UFW firewall and thus leave only port 4242 open.
      
      • The hostname of your virtual machine must be your login ending with 42 (mmonclus42). You will have to modify 
        this hostname during your evaluation.
    
      • You have to implement a strong password policy.
      
      • You have to install and configure sudo following strict rules.
      
      • In addition to the root user, a user with your login as username has to be present.
      
      • This user has to belong to the user42 and sudo groups.
      
### 6. Set up a strong password policy, you have to comply with the following requirements:
      
      • Your password has to expire every 30 days.

      • The minimum number of days allowed before the modification of a password will be set to 2.
      
      • The user has to receive a warning message 7 days before their password expires.
      
      • Your password must be at least 10 characters long. It must contain an uppercase letter, a lowercase letter, and a number. 
        Also, it must not contain more than 3 consecutive identical characters.
      
      • The password must not include the name of the user.
      
      • The following rule does not apply to the root password: The password must have at least 7 characters that are not part
        of the former password.

      • Of course, your root password has to comply with this policy.
 
### 7. Monitoring Script

**Create a simple script called monitoring.sh. It must be developed in bash.**
 
At server startup, the script will display some information (listed below) on all terminals every 10 minutes (take a look at wall). 
The banner is optional. No error must be visible.
 
The script must always be able to display the following information:

      • The architecture of your operating system and its kernel version.
      
      • The number of physical processors.
      
      • The number of virtual processors.
      
      • The current available RAM on your server and its utilization rate as a percentage.
      
      • The current available memory on your server and its utilization rate as a percentage.
      
      • The current utilization rate of your processors as a percentage.
      
      • The date and time of the last reboot.
      
      • Whether LVM is active or not.
      
      • The number of active connections.
      
      • The number of users using the server.
      
      • The IPv4 address of your server and its MAC (Media Access Control) address.
      
      • The number of commands executed with the sudo program.

## BONUS PART

### 7. Set up partitions correctly so you get a structure similar to the one above:

### 8. Set up a functional WordPress website with the following services: lighttpd, MariaDB, and PHP.

### 9. Set up a service of your choice that you think is useful (NGINX / Apache2 excluded!). During the defense, you will have to justify your choice.

 

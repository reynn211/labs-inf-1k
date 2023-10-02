# Отчет по лабораторной работе № 2
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Явметдинов Максим Русланович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Bash, linux terminal
2. **Цель работы**: Опробовать команды
3. **Задание**:
- Опробовать следующие команды:
    - who
    - pwd
    - ls
    - cd
    - cp
    - mv
    - rm
    - cat
    - ps
    - tail
    - head
    - grep
    - history
    - mkdir
    - rmdir
    - sudo
    - echo
    - ssh
    - scp
    - ssh-keygen
    - ssh-copy-id
- Использовать основные команды
- Сохранить листинг в файл
- Заархивировать
- Отправить на удаленную машину, там разархивировать
- Скачать разархивированный файл к себе на машину
- Составить отчет с листингом в формате markdown
- Выложить на github через merge веток
4. **Идея, метод, алгоритм решения задачи**: 
- Запустить WSL
- Выполнить команды
- Идти дальше по заданию
5. **Сценарий выполнения работы**: По очереди выполнять команды в терминале
6. **Протокол**: 
```
Microsoft Windows [Version 10.0.19045.2965]
(c) Microsoft Corporation. All rights reserved.

C:\Users\admin>wsl
To run a command as administrator (user "root"), use "sudo <command>".
See "man sudo_root" for details.

user@DESKTOP-098GB89:/mnt/c/Users/admin$ who
user     pts/1        2023-09-18 11:27
user@DESKTOP-098GB89:/mnt/c/Users/admin$ pwd
/mnt/c/Users/admin
user@DESKTOP-098GB89:/mnt/c/Users/admin$ ls
'3D Objects'
 AppData
'Application Data'
 Contacts
 Cookies
 Desktop
 Documents
 Downloads
 Favorites
 IntelGraphicsProfiles
 Links
'Local Settings'
 Music
'My Documents'
 NTUSER.DAT
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TM.blf
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TMContainer00000000000000000001.regtrans-ms
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TMContainer00000000000000000002.regtrans-ms
 NetHood
 Pictures
 PrintHood
 Recent
'Saved Games'
 Searches
 SendTo
'Start Menu'
 Templates
 Videos
 ntuser.dat.LOG1
 ntuser.dat.LOG2
 ntuser.ini
user@DESKTOP-098GB89:/mnt/c/Users/admin$ cd Desktop
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop$ mkdir labtest
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop$ cd labtest
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ touch file.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ls
file.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ cp file.txt file2.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ls
file.txt  file2.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ mv file.txt file.log
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ls
file.log  file2.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ rm file.txt
rm: cannot remove 'file.txt': No such file or directory
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ rm file.log
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ls
file2.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ nano
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ nano file2.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ cat file2.txt
12345678
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ps
    PID TTY          TIME CMD
    414 pts/0    00:00:00 bash
    503 pts/0    00:00:00 ps
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ nano tail.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ tail tail.txt
2
3
4
5
6
7
8
9
0

user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ tail -n5 tail.txt
7
8
9
0

user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ head tail.txt
1
2
3
4
5
6
7
8
9
0
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ head -n5 tail.txt
1
2
3
4
5
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ nano grep.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ cat grep.txt
hello
world
1
2
3
woooorld
HELLO
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ grep -n "world" grep.txt
2:world
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ history
    1  clear
    2  ls -a
    3  ls
    4  nano
    5  nano app.py
    6  ssh-copy-id m_yavmetdinov@185.5.249.140
    7  ssh-copy-id --help
    8  ssh-copy-id m_yavmetdinov@185.5.249.140 -i /mnt/c/Users/admin/.ssh/id_rsa.pub
    9  ssh-copy-id -i /mnt/c/Users/admin/.ssh/id_rsa.pub m_yavmetdinov@185.5.249.140
   10  ssh-copy-id -i /mnt/c/Users/admin/.ssh/id_rsa m_yavmetdinov@185.5.249.140
   11  ssh-copy-id -i C:/Users/admin/.ssh/id_rsa m_yavmetdinov@185.5.249.140
   12  exit
   13  who
   14  pwd
   15  ls
   16  cd Desktop
   17  mkdir labtest
   18  cd labtest
   19  touch file.txt
   20  ls
   21  cp file.txt file2.txt
   22  ls
   23  mv file.txt file.log
   24  ls
   25  rm file.txt
   26  rm file.log
   27  ls
   28  nano
   29  nano file2.txt
   30  cat file2.txt
   31  ps
   32  nano tail.txt
   33  tail tail.txt
   34  tail -n5 tail.txt
   35  head tail.txt
   36  head -n5 tail.txt
   37  nano grep.txt
   38  cat grep.txt
   39  grep -n "world" grep.txt
   40  history
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ mkdir directory
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ls
directory  file2.txt  grep.txt  tail.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ rmdir directory/
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ls
file2.txt  grep.txt  tail.txt
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ sudo su
[sudo] password for user:
root@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest# who
user     pts/1        2023-09-18 11:27
user     pts/2        2023-09-18 11:31
root@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest# exit
exit
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ echo "hello"
hello
user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ssh m_yavmetdinov@185.5.249.140
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ED25519 key fingerprint is SHA256:gMWpghci4jH+8KckY83J+zLNE4DrwfrDZorZZU2IRGI.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '185.5.249.140' (ED25519) to the list of known hosts.
m_yavmetdinov@185.5.249.140's password:

user@DESKTOP-098GB89:/mnt/c/Users/admin/Desktop/labtest$ ssh -i /mnt/c/Users/admin/.ssh/id_rsa m_yavmetdinov@185.5.249.140
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@         WARNING: UNPROTECTED PRIVATE KEY FILE!          @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Permissions 0777 for '/mnt/c/Users/admin/.ssh/id_rsa' are too open.
It is required that your private key files are NOT accessible by others.
This private key will be ignored.
Load key "/mnt/c/Users/admin/.ssh/id_rsa": bad permissions
m_yavmetdinov@185.5.249.140's password:

user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ cp /mnt/c/Users/admin/.ssh/* ~/.ssh/
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ ls ~/.ssh
id_rsa  id_rsa.pub  known_hosts
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ chmod 600 ~/.ssh/id_rsa
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ ssh m_yavmetdinov@185.5.249.140
Enter passphrase for key '/home/user/.ssh/id_rsa':
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 11:09:07 2023 from 185.45.192.20
m_yavmetdinov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ ssh m_yavmetdinov@185.5.249.140
Enter passphrase for key '/home/user/.ssh/id_rsa':
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 11:34:23 2023 from 185.45.192.20
m_yavmetdinov@vds2476450:~$ touch a_file.txt
m_yavmetdinov@vds2476450:~$ nano a_file.txt
m_yavmetdinov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ scp m_yavmetdinov@185.5.249.140:~/a_file.txt a_file.txt
Enter passphrase for key '/home/user/.ssh/id_rsa':
a_file.txt                                                                            100%    9     0.1KB/s   00:00
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ cat a_file.txt
with scp
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/user/.ssh/id_rsa): /home/user/.ssh/id_rsa_temp
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /home/user/.ssh/id_rsa_temp
Your public key has been saved in /home/user/.ssh/id_rsa_temp.pub
The key fingerprint is:
SHA256:nfT19bTyEddRA4POhRSVYlI04x0t6yoTeSYIgO5075c user@DESKTOP-098GB89
The key's randomart image is:
+---[RSA 3072]----+
|  .       +B==+oo|
| . .     ..=++o.+|
|.   .     *.o.+.=|
| o . .   o = o o*|
|o . . . S + o. oo|
| .   . . + o .o .|
|    .   . = .  . |
|     . E o .     |
|      .   o      |
+----[SHA256]-----+
user@DESKTOP-098GB89:/mnt/c/Users/admin/.ssh$ ssh-copy-id m_yavmetdinov@185.5.249.140
/usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/home/user/.ssh/id_rsa_temp.pub"
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
Enter passphrase for key '/home/user/.ssh/id_rsa':

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'm_yavmetdinov@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

user@DESKTOP-098GB89:/mnt/c/Users/admin$ cp /mnt/c/Users/admin/Documents/vault/report-2.md report-2.md
user@DESKTOP-098GB89:/mnt/c/Users/admin$ tar czf archive.tar.gz report-2.md
user@DESKTOP-098GB89:/mnt/c/Users/admin$ ls
'3D Objects'
 AppData
'Application Data'
 Contacts
 Cookies
 Desktop
 Documents
 Downloads
 Favorites
 IntelGraphicsProfiles
 Links
'Local Settings'
 Music
'My Documents'
 NTUSER.DAT
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TM.blf
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TMContainer00000000000000000001.regtrans-ms
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TMContainer00000000000000000002.regtrans-ms
 NetHood
 Pictures
 PrintHood
 Recent
'Saved Games'
 Searches
 SendTo
'Start Menu'
 Templates
 Videos
 archive.tar.gz
 ntuser.dat.LOG1
 ntuser.dat.LOG2
 ntuser.ini
 report-2.md
user@DESKTOP-098GB89:/mnt/c/Users/admin$ scp archive.tar.gz m_yavmetdinov@185.5.249.140:~/archive.tar.gz
Enter passphrase for key '/home/user/.ssh/id_rsa':
archive.tar.gz                                                                        100% 3730    39.2KB/s   00:00
user@DESKTOP-098GB89:/mnt/c/Users/admin$ ssh m_yavmetdinov@185.5.249.140
Enter passphrase for key '/home/user/.ssh/id_rsa':
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 11:45:15 2023 from 185.45.192.20
m_yavmetdinov@vds2476450:~$ ls
a_file.txt  archive.tar.gz
m_yavmetdinov@vds2476450:~$ tar xzf archive.tar.gz
m_yavmetdinov@vds2476450:~$ ls
a_file.txt  archive.tar.gz  report-2.md
m_yavmetdinov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
user@DESKTOP-098GB89:/mnt/c/Users/admin$ scp m_yavmetdinov@185.5.249.140:~/report-2.md new-report-2.md
Enter passphrase for key '/home/user/.ssh/id_rsa':
report-2.md                                                                           100%   11KB 104.1KB/s   00:00
user@DESKTOP-098GB89:/mnt/c/Users/admin$ ls
'3D Objects'
 AppData
'Application Data'
 Contacts
 Cookies
 Desktop
 Documents
 Downloads
 Favorites
 IntelGraphicsProfiles
 Links
'Local Settings'
 Music
'My Documents'
 NTUSER.DAT
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TM.blf
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TMContainer00000000000000000001.regtrans-ms
 NTUSER.DAT{53b39e88-18c4-11ea-a811-000d3aa4692b}.TMContainer00000000000000000002.regtrans-ms
 NetHood
 Pictures
 PrintHood
 Recent
'Saved Games'
 Searches
 SendTo
'Start Menu'
 Templates
 Videos
 archive.tar.gz
 new-report-2.md
 ntuser.dat.LOG1
 ntuser.dat.LOG2
 ntuser.ini
 report-2.md
user@DESKTOP-098GB89:/mnt/c/Users/admin$
```
7. **Выводы**: Эта работа мне понравилась тем, что я смог попробовать команды Bash в терминале и подключиться к удаленному серверу по SSH. Эти знания мне пригодятся при работе с удаленными машинами в терминале. Было интересно попробовать различные команды и посмотреть на их вывод. Итог: Я научился использовать несколько команд Bash, подключаться к серверу по SSH и настраивать ключи для входа без пароля.

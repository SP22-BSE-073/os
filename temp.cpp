#include <bits/stdc++.h>
#include <sys/wait.h>
// fan
for (int i = 0; i < numChild; i++) {
        int child_pid = fork();
        if (child_pid == 0) {
            cout << "Child PID: " << getpid() << " with PPID: " << getppid() << endl;
            break;
        }
    }
// chain
void subchain(int n) {
    if (n <= 0) {
        return;
    }

    cout << "PID: " << getpid() << " with PPID: " << getppid() <<endl;

    int child_pid = fork();
    if (child_pid == 0) {
        subchain(n - 1);
    }
}
// system comand
string cmd1 = "ls -l";
        const char* command=cmd1.c_str();
        system(command);
// pipe
int fd1[2], fd2[2];
    pipe(fd1);
    pipe(fd2);
write(fd1[1], &rowSum, sizeof(rowSum));
read(fd1[0], &rowSum, sizeof(rowSum));


int main(){
    int arr[2];
    string msg;
    cout<<"Enter Data: ";
    getline(cin, msg);
write(arr[1], msg.c_str(), msg.size());
pid_t pid = fork();

if(pid == 0){
    char buf[msg.size() + 1];
    read(arr[0], buf, msg.size());
    cout << "Child READING THE DATA: " << msg << endl;
}
return 0;
}

function fib {
echo "Enter range: "
read range
a1=0
a2=1
echo $a1 $a2
for ((i=0;i<=range;i++))
do
a3=$(($a1+$a2))
echo $a3
a1=$a2
a2=$a3
done
}

Here’s a Linux command cheat sheet with 100 commonly used commands:

    pwd — Print the current working directory.
    ls — List directory contents.
    cd — Change directory.
    mkdir — Create a new directory.
    rm — Remove files or directories.
    cp — Copy files and directories.
    mv — Move or rename files and directories.
    touch — Create an empty file or update the timestamp of an existing file.
    cat — Display the contents of a file.
    head — Display the first few lines of a file.
    tail — Display the last few lines of a file.
    grep — Search for a pattern in files.
    find — Search for files and directories.
    tar — Create or extract tar archives.
    gzip — Compress files.
    gunzip — Decompress files compressed with gzip.
    zip — Create or extract zip archives.
    unzip — Extract files from a zip archive.
    ssh — Connect to a remote server using SSH.
    scp — Copy files between local and remote machines over SSH.
    wget — Download files from the web.
    curl — Transfer data from or to a server using various protocols.
    man — Display the manual pages for a command.
    which — Display the location of a command.
    history — Display the command history.
    sudo — Run a command with administrative privileges.
    su — Switch to another user account.
    chmod — Change the permissions of a file or directory.
    chown — Change the ownership of a file or directory.
    chgrp — Change the group ownership of a file or directory.
    du — Estimate file and directory space usage.
    df — Display disk space usage.
    top — Display system resource usage and running processes.
    ps — Display running processes.
    kill — Terminate processes.
    ifconfig — Configure network interfaces.
    ping — Send ICMP echo requests to a host.
    nslookup — Query DNS servers for DNS records.
    netstat — Display network connections, routing tables, and interface statistics.
    ssh-keygen — Generate SSH key pairs.
    grep — Search for a pattern in files.
    awk — Text processing tool for extracting and manipulating data.
    sed — Stream editor for text manipulation.
    diff — Compare files line by line.
    sort — Sort lines of text files.
    cut — Extract sections from lines of files.
    wc — Count lines, words, and characters in a file.
    tee — Redirect output to multiple files or processes.
    uptime — Display system uptime and load averages.
    who — Display logged-in users.
    date — Display or set the system date and time.
    cal — Display a calendar.
    tar — Create or extract tar archives.
    df — Display disk space usage.
    free — Display memory usage.
    uname — Display system information.
    ifconfig — Configure network interfaces.
    route — Display or manipulate the IP routing table.
    iptables — Administration tool for IPv4 packet filtering and NAT.
    shutdown — Shut down or reboot the system.
    reboot — Reboot the system.
    halt — Halt the system.
    locate — Find files by name.
    updatedb — Update the file database used by ‘locate’.
    alias — Create an alias for a command.
    source — Execute commands from a file in the current shell.
    tar — Create or extract tar archives.
    gzip — Compress files.
    gunzip — Decompress files compressed with gzip.
    zip — Create or extract zip archives.
    unzip — Extract files from a zip archive.
    crontab — Schedule commands or scripts to run at specified intervals.
    nohup — Run a command immune to hangups and with output to a non-tty.
    wget — Download files from the web.
    curl — Transfer data from or to a server using various protocols.
    grep — Search for a pattern in files.
    find — Search for files and directories.
    wc — Count lines, words, and characters in a file.
    sed — Stream editor for text manipulation.
    awk — Text processing tool for extracting and manipulating data.
    cut — Extract sections from lines of files.
    sort — Sort lines of text files.
    diff — Compare files line by line.
    ssh — Connect to a remote server using SSH.
    scp — Copy files between local and remote machines over SSH.
    rsync — Synchronize files and directories between systems.
    crontab — Schedule commands or scripts to run at specified intervals.
    tar — Create or extract tar archives.
    top — Display system resource usage and running processes.
    ps — Display running processes.
    kill — Terminate processes.
    lsof — List open files and processes that use them.
    lscpu — Display information about the CPU architecture.
    lshw — Display detailed hardware configuration.
    lspci — Display information about PCI devices.
    lsusb — Display information about USB devices.
    uname — Display system information.
    iftop — Display network bandwidth usage.
    sar — Collect, report, or save system activity information.
    nc — Netcat utility for reading from and writing to network connections.


// 3rd  largest number

int main(){
int arr[] = {4,5,6,3,9,33,6,15};
int d1=arr[0];
for(int i=0;i<10;i++){
if(arr[i]>d1){d1=arr[i];}
}
int d2=arr[0];
for(int i=0;i<10;i++){
if(d1>arr[i] && d2<arr[i]){d2=arr[i];}
}
int d3=arr[0];
for(int i=0;i<10;i++){
if( arr[i]<d2 && d3<arr[i]){d3=arr[i];}
}
cout<<"Array : ";
for(int i=0;i<10;i++){
cout<<arr[i]<<",";
}
cout<<endl<<"third larges : "<<d3<<endl;
return 0;
}

cout<<"Current Directory: \n";
    system("pwd");
    cout<<"\nContents of Directory: \n";
    system("ls -l");
    cout<<"\nCurrent Date and Time: \n";
    system("date");
    system("cat > usman.txt << EOF\nName : Usman Hafeez\nRoll No : sp22-bse-073\nSkills : \n1. C++\n2. Python\n3. Java\n4. HTML\n5. CSS\n6. JavaScript\n7. React\n8. Node.js\n9. Express.js\n10. MongoDB\nEOF");
    cout<<"\nContents of File using head: \n";
    system("head usman.txt");
    cout<<"\nContents of File using tail: \n";
    system("tail usman.txt");
    string extension;
    cout<<"\nEnter the extension to search: ";
    cin>>extension;
    string command = "ls *."+extension;
    const char* msg = command.c_str();
    cout<<"\nFiles with extension "<<extension<<": \n";
    system(msg);
    cout<<"\nCurrent Running Processes: \n";
    system("ps -aux");
    return 0;

    ;
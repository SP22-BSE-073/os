#include<bits/stdc++.h>
#include<sys/shm.h>

using namespace std;

int main(){
	int shmid;
	void *shared_memory;
	char buff[100];
	
	shmid = shmget((key_t)2345, 1024, 0666|IPC_CREAT);
	
	cout<<"Key of shared memory is: "<<shmid<<endl;
	shared_memory = shmat(shmid,NULL,0);
	
	cout<<"Process attached at "<<shared_memory<<endl;
	
	cin.getline(buff,100);
	strcpy(static_cast<char*>(shared_memory), buff);

	cout<<"You wrote: "<<(char *)shared_memory<<endl;
	
	return 0;
}

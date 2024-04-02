#include<bits/stdc++.h>
#include<sys/shm.h>

using namespace std;

int main(){
	void* shared_memory;
	char buff[100];
	int shmid;
	
	shmid = shmget((key_t)2345, 1024, 0666);
	
	cout<<"Key of shared memory is: "<<shmid<<endl;

	shared_memory = shmat(shmid,NULL,0);
	cout<<"Process attached at: "<<shared_memory<<endl;
	
	cout<<"Data Read from shared memory is:"<<endl;
	cout<<(char*)shared_memory<<endl;

	return 0;
}

#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *arg[])
{

	printf("Thread Id %d\n" ,syscall(SYS_gettid));
	printf("Process Id %ld\n",syscall(SYS_getpid));
	printf("Parent Process ID %ld\n",syscall(SYS_getppid));
	printf("Real user Id %ld\n",syscall(SYS_getuid));
	printf("Group Id %ld\n",syscall(SYS_getgid));
	printf("Effective User Identity %ld",syscall(SYS_geteuid));
return 0;
}

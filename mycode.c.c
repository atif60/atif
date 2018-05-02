#include<stdio.h>
#include<unistd.h>
int main()
{
printf("I am the process with id %d\n",getpid());
printf("I am the user id with %d\n" ,getuid());

printf("I am the group id with %d\n",getgid());
}

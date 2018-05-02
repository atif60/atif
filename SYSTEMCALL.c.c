#define _GNU_SOURCE
#include<unistd.h>
#include<sys/types.h>
#include<sys/types.h>
#include<stdio.h>
int main (int argc,char*argv[])
{
printf("thread id %ld]n",syscall(SYS_gettid));
}

#include<unistd.h>
#include<sys/types.h>
#include<syscall.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
FILE *filePointer;
filePointer=fopen("File.txt","w");
fprintf(filePointer,"\nProcess Id-->%d",getpid());
fprintf(filePointer,"\n\n Enviroment Variables \n\n");
fprintf(filePointer,"\nROOT-->%s",getenv("ROOT"));
fprintf(filePointer,"\n PATH-->%s",getenv("PATH"));
fprintf(filePointer,"\n\n Thread Information \n\n");
fprintf(filePointer,"\n Thread-->%ld",syscall(SYS_gettid));
fclose(filePointer);
return 0;
}

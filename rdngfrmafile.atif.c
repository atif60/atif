#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *filePointer;
filePointer=fopen("File.txt","r");
char ch;
ch=getc(filePointer);
while(ch!=EOF){
putchar(ch);
ch=getc(filePointer);
}
return 0;
}

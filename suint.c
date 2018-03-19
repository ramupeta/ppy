#include<stdio.h>
#include<stdlib.h>
main(int argc,int *argv)
{
int i,s=0;
for(i=1;i<argc;i++)
{
s+=(atoi(argv[1]));
}
printf("%d\n",s);
}

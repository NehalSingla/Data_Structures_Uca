#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int j=0;
printf("No if arguments is %d\n",argc);
int arr[argc-1];
  for(int i=0;i<argc;i++)
  {
  int arr[j]= atoi(argv[i]);
 // arr[j]=m;
  j++;
  }
  int n=j;
  for(int i=n;i>=0;i--)
  {
     printf("%d",arr[i]);
  }
  return 0;
}

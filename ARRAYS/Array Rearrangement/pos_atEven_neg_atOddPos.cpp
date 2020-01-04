#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void rearrange(int arr[],int k)
{
	int pos=0,neg=1;
	while(true)
	{
		while(pos<k && arr[pos]>=0)
			pos+=2;
		while(neg<k && arr[neg]<=0)
			neg+=2;
		if(pos<k && neg<k)
		{
			swap(arr[pos],arr[neg]);
		}
		else
			break;
	}



for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";
}    
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	rearrange(arr,k);
	return 0;
}

#include<iostream>
#include<stdlib.h>
using namespace std;


void modify(int arr[],int k)
{
	if(k==1)
		return;
	for(int i=0;i<k-1;i++)
	{
		if(arr[i]!=0 && arr[i]==arr[i+1])
		{
			arr[i]=arr[i]*2;
			arr[i+1]=0;
		}
		i++;
	}
}
void moveZeroToEnd(int arr[],int k)
{
	int count=0;
	for(int i=0;i< k;i++)
	{
		if(arr[i]!=0)
		{
			arr[count++]=arr[i];
		}

	}
	while(count<k)
		arr[count++]=0;
}
void print(int arr[],int k)
{
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	modify(arr,k);
	moveZeroToEnd(arr,k);
	print(arr,k);
	return 0;
}

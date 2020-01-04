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
	for(int i=0;i<k-1;i++)
	{
		if(i%2==0)
		{
			if(arr[i]>arr[i+1])
				swap(arr[i],arr[i+1]);
		}
		else
		{
			if(arr[i]<arr[i+1])
				swap(arr[i],arr[i+1]);
		}
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

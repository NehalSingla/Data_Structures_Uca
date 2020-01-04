#include<iostream>
#include<stdlib.h>
using namespace std;


void rearrange(int arr[],int k)
{
	for(int i=0;i<k;i++)
	{
		if(i==0)
	            cout<<arr[0]*arr[1]<<" ";
		if(i>0 && i < k-1)
			cout<<arr[i-1]*arr[i+1]<<" ";
		if(i==k-1)
			cout<<arr[k-2]*arr[k-1]<<" ";
	}
 
}


int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	rearrange(arr,k);
	return 0;
}


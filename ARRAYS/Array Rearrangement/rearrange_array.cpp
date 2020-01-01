//Rearrange array such that arr[i]=i

#include<iostream>
#include<stdlib.h>
using namespace std;

void rearrange(int arr[],int n)
{
	for(int i=0;i<n;i++){
		if(arr[i]!=-1 && arr[i]!=i)
		{
			int x=arr[i];
			while(arr[x]!=-1 && arr[x]!=x)
			{
				int y=arr[x];
				arr[x]=x;
				x=y;
			}
			arr[x]=x;
			if(arr[i]!=i)
			{
				arr[i]=-1;
			}
		}
	}
}

int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	rearrange(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);

	int c=0;
	for(int i=0;i<k;i++)
	{
		if(arr[i]!=0)
		{
			int t=arr[c];
			arr[c]=arr[i];
			arr[i]=t;
			c++;
		}
	}
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}

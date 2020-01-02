// change content of array so that arr[i]=j is changed to arr[j]=i

#include<iostream>
#include<stdlib.h>
using namespace std;


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
	print(arr,k);
          int temp[k];
	for(int i=0;i<k;i++)
	{
		temp[arr[i]]=i;
	}
	for(int i=0;i<k;i++)
		arr[i]=temp[i];
           cout<<endl;
	print(arr,k);
	return 0;
}


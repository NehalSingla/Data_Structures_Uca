#include<iostream>
#include<stdlib.h>
using namespace std;



void reorder(int arr[],int index[],int k,int m)
{
	int temp[k];
	for(int i=0;i<k;i++)
	{
		temp[index[i]]=arr[i];
	}
	for(int i=0;i<k;i++)
	{
		arr[i]=temp[i];
		index[i]=i;
	}
}
void print(int arr[],int k)
{
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main(int argc,char *argv[])
{
	
	int n=argc/2;
	int arr[n];
	int index[n];
	int k=0,m=0;
	for(int i=1;i<=n;i++)
		arr[k++]=atoi(argv[i]);
	for(int i=n+1;i<argc;i++)
		index[m++]=atoi(argv[i]);
	reorder(arr,index,k,m);
	print(arr,k);
	print(index,m);
	return 0;
}


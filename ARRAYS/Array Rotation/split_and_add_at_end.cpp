#include<iostream>
#include<stdlib.h>
using namespace std;

void leftrotate(int arr[],int n)
{
	int i;
	int temp=arr[0];
	for( i=0;i<n-1;i++)
		arr[i]=arr[i+1];
	arr[i]=temp;
}
void split_and_add(int arr[],int n,int d)
{
	for(int i=0;i<d;i++)
		leftrotate(arr,n);
 }
void printarray(int arr[],int k)
{
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}	
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int index=atoi(argv[argc-1]);
	split_and_add(arr,k,index);
	printarray(arr,k);
	return 0;
}

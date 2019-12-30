//array rotation using reversal algo

#include<iostream>
#include<stdlib.h>
using namespace std;

void reverse(int arr[],int s,int e)
{
	while(s<e)
	{
		int temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
}
void leftrotate(int arr[],int n,int d)
{
	if(d==0)
		return;
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int d=atoi(argv[argc-1]);
	if(d>k)
		d=d%k;    //if no of rotation is greater than no of elements
	leftrotate(arr,k,d);
	printarray(arr,k);
	return 0;
}
	

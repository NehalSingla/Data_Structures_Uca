// clockwise(right) rotation of elements

#include<iostream>
#include<stdlib.h>
using namespace std;

void rightRotateByOne(int arr[],int k)
{         
	int i;
	int temp=arr[k-1];
	for( i=k-1;i>0;i--)
		arr[i]=arr[i-1];
	arr[i]=temp;
}
void right_rotate(int arr[],int k,int d)
{
	for(int i=0;i<d;i++)
		rightRotateByOne(arr,k);
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

	int d=atoi(argv[argc-1]);
	right_rotate(arr,k,d);
	printarray(arr,k);
	return 0;
}

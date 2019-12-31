//ARRAY ROTATION BY d elements

#include<iostream>
#include<stdlib.h>
using namespace std;

void leftrotateByOne(int arr[],int k)
{
      int temp,i;
         temp= arr[0];
	for(i=0;i<k-1;i++)
	{
		arr[i]=arr[i+1];
	}
	 arr[i]=temp;
}

void leftrotate(int arr[],int k,int d)
{
	for(int i=0;i<d;i++)
	{
		leftrotateByOne(arr,k);
	}
}
void printarray(int arr[],int k)
{
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc-1;i++)
	arr[k++]=atoi(argv[i]);
	int d=atoi(argv[argc-1]);//no of rotations
	leftrotate(arr,k,d);
	printarray(arr,k);
	return 0;
}



#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void segregate(int arr[],int k)
{
	int i=-1,j=0;
	while(j!=k)
	{
		if(arr[j]%2==0)
		{
			i++;
		swap(arr[i],arr[j]);
	}
	j++;
	}
}
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
	segregate(arr,k);
	print(arr,k);
	return 0;
}

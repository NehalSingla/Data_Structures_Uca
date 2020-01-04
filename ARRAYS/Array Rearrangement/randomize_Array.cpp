#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void randomize(int arr[],int k)
{

	srand(time(NULL));
	for(int i=k-1;i>0;i--)
	{
		int j=rand() % (i+1);
		swap(arr[i],arr[j]);
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
	randomize(arr,k);
	print(arr,k);
	return 0;
}

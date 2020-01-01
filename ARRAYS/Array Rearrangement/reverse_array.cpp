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

	reverse(arr,0,k-1);
	print(arr,k);
	return 0;
}

// right rotate using reversal algo

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
void printarray(int arr[],int k)
{
	for(int i=0;i<k;i++)
		cout<<arr[i]<<"  ";
}
void right_rotate(int arr[],int k,int d)
{
	if(d==0)
		return;
	reverse(arr,0,k-1);
	reverse(arr,0,d-1);
	reverse(arr,d,k-1);
}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int d=atoi(argv[argc-1]);
	right_rotate(arr,k,d);
	printarray(arr,k);
	return 0;
}

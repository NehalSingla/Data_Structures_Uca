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
void printArray(int arr[],int k){
   for(int i=0;i<k;i++)
	   cout<<arr[i]<<" ";}
void leftrotate(int arr[],int k,int d){
	if(d==0)
		return;
	if(d>k)
		d=d%k;
	reverse(arr,0,d-1);
	reverse(arr,d,k-1);
	reverse(arr,0,k-1);
}

int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int values=atoi(argv[argc-1]);
	leftrotate(arr,k,values);
	printArray(arr,k);
	return 0;
}
        	


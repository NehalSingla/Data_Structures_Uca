#include<iostream>
#include<stdlib.h>
using namespace std;
int findmin(int arr[],int s,int e)
{
	if(e<s)
		return arr[0];
	if(s==e)
		return arr[e];
	int m=(s+e)/2;

	if(m<e && arr[m]>arr[m+1])
		return arr[m+1];
	if(m>s && arr[m]<arr[m-1])
		return arr[m];
	if(arr[e]>arr[m])
		return findmin(arr,0,m-1);
	return findmin(arr,m+1,e);
}
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int n=findmin(arr,0,k-1);
	cout<<n;
	return 0;
}

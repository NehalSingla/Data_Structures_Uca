#include<iostream>
#include<stdlib.h>
using namespace std;

int findpivot(int arr[],int s,int e)
{
	if(e<s)
		return 0;
	if(s==e)
		return s;
	int m=(s+e)/2;
	if(m < e && arr[m+1]<arr[m])
		return m+1;
	if(m> s && arr[m]<arr[m-1])
		return m;

	if(arr[e]>arr[m])
		return findpivot(arr,s,m-1);
	else
		return findpivot(arr,m+1,e);
}

int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int rotation=findpivot(arr,0,k-1);
	cout<<rotation;
	return 0;
}

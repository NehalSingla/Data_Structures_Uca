#include<iostream>
#include<stdlib.h>
using namespace std;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int minswap(int *arr,int k,int s)
{
	int count=0;
	for(int i=0;i<k;i++)
	{
		if(arr[i]<=k)
			count++;
	}
	int bad=0;
	for(int i=0;i<count;i++)
	{
		if(arr[i]>k)
			bad++;
	}
	int ans=bad;

	for(int i=0,j=count;j<k;j++,i++)
	{
		if(arr[j]>k)
			bad++;
	
	ans=min(ans,bad);
	}
	return ans;
}
int main(int argc,char *argv[])
{
	int arr[argc-2],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int s=atoi(argv[argc-1]);

	int swap=minswap(arr,k,s);
	cout<<swap;
	return 0;
}

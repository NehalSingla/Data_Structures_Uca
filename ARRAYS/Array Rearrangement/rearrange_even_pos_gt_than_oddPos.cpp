#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);

	sort(arr,arr+k);
	int temp[k];
	int p=0,q=k-1;
	for(int i=0;i<k;i++)
	{
		if((i+1)%2==0)
		{
			temp[i]=arr[q--];
		}
		else
			temp[i]=arr[p++];
	}
	for(int i=0;i<k;i++)
		cout<<temp[i]<<" ";
	return 0;
}

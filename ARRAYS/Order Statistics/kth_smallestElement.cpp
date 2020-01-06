#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;


void kth_smallest(int arr[],int m,int k)
{
	sort(arr,arr+m);
	for(int i=0;i<m;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<arr[k-1];
}

int main(int argc,char *argv[])
{
	int arr[argc-2];
	int m=0;
	for(int i=1;i<argc-1;i++)
		arr[m++]=atoi(argv[i]);
	int k=atoi(argv[argc-1]);

	kth_smallest(arr,m,k);
	return 0;
}

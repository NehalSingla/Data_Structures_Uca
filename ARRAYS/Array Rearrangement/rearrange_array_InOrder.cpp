//rearrange smallest,largest,2nd smallest,2nd largest.....

#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;
void rearrange(int arr[],int k)
{
	sort(arr,arr+k);
	/*for(int i=0;i<k;i++)
                cout<<arr[i]<<" ";*/

	int temp[k];
	int m=0;
	for(int i=0,j=k-1;i<=k/2||j>k/2;i++,j--)
	{
		temp[m]=arr[i];
		m++;
		temp[m]=arr[j];
		m++;
	}
	for(int i=0;i<k;i++)
		cout<<temp[i]<<" ";
}
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	rearrange(arr,k);
	return 0;
}


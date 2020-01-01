//Rearrange array such that arr[i]>=arr[j] if i is even and arr[i]<=arr[j] if i is odd and j<i

#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


void rearrange(int arr[],int n)
{
	int evenPos=n/2;
	int oddpos=n-evenPos;
	int temp[n];
	for(int i=0;i<n;i++)
	{
		temp[i]=arr[i];
	}
	int j=oddpos-1;
	sort(temp,temp+n);
	for(int i=0;i<n;i+=2)
	{
		arr[i]=temp[j];
		j--;
	}
	j=oddpos;
	for(int i=1;i<n;i+=2)
	{
		arr[i]=temp[j];
		j++;
	}
	        for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";

}
/*void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}*/
	
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	rearrange(arr,k);
	//print(arr,k);
	return 0;
}

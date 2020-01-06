#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

void find(int arr[],int k)
{
	sort(arr,arr+k);
	cout<<"elements having atleast 2 greater element in array are : ";
	for(int i=0;i<k-2;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
         find(arr,k);
	 return 0;
}

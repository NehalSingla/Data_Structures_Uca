#include<iostream>
#include<stdlib.h>
using namespace std;

void max_min_form(int arr[],int k)
{
	int small=0,large=k-1;
	int temp[k];
	int flag=true;
	for(int i=0;i<k;i++)
	{
		if(flag)
			temp[i]=arr[large--];
		else
			temp[i]=arr[small++];
		flag=!flag;
	}

	for(int i=0;i<k;i++)
		cout<<temp[i]<<" ";
}

int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	max_min_form(arr,k);
	return 0;
}

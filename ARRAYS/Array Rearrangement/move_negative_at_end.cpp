#include<iostream>
#include<stdlib.h>
using namespace std;

void move_neg(int arr[],int k)
{
	int temp[k];
	int m=0;
	for(int i=0;i<k;i++)
	{
		if(arr[i]>0)
			cout<<arr[i]<<" ";
		else
			temp[m++]=arr[i];
	}

	for(int i=0;i<m;i++)
		cout<<temp[i]<<" ";
}


int main(int argc,char *argv[])
{
        int arr[argc-1],k=0;
        for(int i=1;i<argc;i++)
                arr[k++]=atoi(argv[i]);
	move_neg(arr,k);
	return 0;
}

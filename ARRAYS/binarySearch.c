#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[],int start,int end,int x)
{
	if(end>=start)
	{
		int mid=start+(end-start)/2;

		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x)
			return binarySearch(arr,start,mid-1,x);
		return binarySearch(arr,mid+1,end,x);
	}
	return -1;
}

int main(int argc,char *argv[])
{
	int arr[argc-2];
	int k=0;

	for(int i=1;i<argc-1;i++)
	{
		arr[k++]=atoi(argv[i]);
	}
	int search=atoi(argv[argc-1]);
	int index=binarySearch(arr,0,k-1,search);
	printf("Element is found at %d",index);
	return 0;
}

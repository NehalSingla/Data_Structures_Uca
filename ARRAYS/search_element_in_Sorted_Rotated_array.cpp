//Search element in sorted and Rotated Array

#include<iostream>
#include<stdlib.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int s)
{
	if(high<low)
		return -1;
	int m=(low+high)/2;

	if(s==arr[m])
		return m;
	if(s<arr[m])
		return binarySearch(arr,low,m-1,s);
	else
		return binarySearch(arr,m+1,high,s);
}
int findpivot(int arr[],int start,int end)
{
	if(end<start)
		return -1;
	if(start==end)
		return start;
	int m=(start+end)/2;
	if(m<end && arr[m+1]<arr[m])
             return m+1;

	if(m>start  && arr[m]<arr[m-1])
		return  m;
	if(arr[end]>arr[m])
		return findpivot(arr,start,m-1);
	return  findpivot(arr,m+1,end);
}
int  pivotedBinarySearch(int arr[],int k,int s)
{
	//cout<<k;
      int pivot=findpivot(arr,0,k-1);
          cout<<pivot<<" "<<arr[pivot]<<endl;

	 if(pivot==-1)
		return binarySearch(arr,0,k-1,s);
	if(arr[pivot]==s)
	       return pivot;
        if(arr[0]<=s)	
		return binarySearch(arr,0,pivot-1,s);
	return binarySearch(arr,pivot+1,k-1,s);

}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int search=atoi(argv[argc-1]);
	int index=pivotedBinarySearch(arr,k,search);
	cout<<"Index of "<<search<<" is "<<index;
	return 0;
}

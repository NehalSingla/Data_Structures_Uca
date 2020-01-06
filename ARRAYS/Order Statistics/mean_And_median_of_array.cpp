#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

double mean(int arr[],int k)
{
	int sum=0;
	for(int i=0;i<k;i++)
		sum+=arr[i];
	double m=(double)sum/(double)k;
	return m;
}
double median(int arr[],int k)
{
	sort(arr,arr+k);
	if(k%2!=0)
		return (double)arr[k/2];
	else
	{   
	double med=(double)(arr[(k-1)/2]+arr[k/2])/2.0;
	return med;
	}
}
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	cout<<"Mean: "<<mean(arr,k)<<endl;
	cout<<"Median: "<<median(arr,k);
	return 0;
}


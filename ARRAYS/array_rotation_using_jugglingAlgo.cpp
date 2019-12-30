//array rotation using juggling algo

#include<iostream>
#include<stdlib.h>
using namespace std;

int g_c_d(int a,int b)
{
	if(b==0)
		return a;
	else
		g_c_d(b,a%b);
}
void leftrotate(int arr[],int n,int d)
{
	int gcd=g_c_d(d,n);
	int temp;
	for(int i=0;i<gcd;i++)
	{
	       temp=arr[i];
	       int j=i;
	       while(1)
	       {
		       int k=j+d;
		       if(k>=n)
			       k=k-n;
		       if(k==i)
			       break;
		      arr[j]= arr[k];
		      j=k;
	       }
	       arr[j]=temp;
	}
}
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
		      
int main(int argc,char *argv[])
{
	int arr[argc-1],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int d=atoi(argv[argc-1]);
            leftrotate(arr,k,d);
	    printarray(arr,k);
	    return 0;
}

//input will be like ./a.out 1 2 3 4 5 6 2

#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

void largest(int arr[],int k)
{
        sort(arr,arr+k);
             
               int check=0,count=1;
	       for(int i=1;i<=k;i++)
	       {
		       if(count<4)
		       {
			       if(check!=arr[k-i])
			       {
				       cout<<arr[k-i]<<" ";
				       check=arr[k-i];
				       count++;
			       }
		       }
	                   else
				   break;
	       }
}

int main(int argc,char *argv[])
{
        int arr[argc-1],k=0;
        for(int i=1;i<argc;i++)
                arr[k++]=atoi(argv[i]);
         largest(arr,k);
         return 0;
}


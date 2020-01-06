#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

void largest(int arr[],int k)
{
       // sort(arr,arr+k);
              //  cout<<arr[k-1]<<" ";
		cout<<*max_element(arr,arr+k);
}
int main(int argc,char *argv[])
{
        int arr[argc-1],k=0;
        for(int i=1;i<argc;i++)
                arr[k++]=atoi(argv[i]);
         largest(arr,k);
         return 0;
}


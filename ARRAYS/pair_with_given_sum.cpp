#include<iostream>
#include<stdlib.h>
using namespace std;
int c=0;
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int sum=atoi(argv[argc-1]);
          int m=1;
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			int sum1=arr[i]+arr[j];
			if(sum1==sum)
			{           if(c==0)
				{
				cout<<"pair with sum "<<sum<<" is "<<arr[i]<<" "<<arr[j];
				c=1;
				m=0;
				}
				break;
			}
		}
	}
	if(m!=0)
		cout<<"Not Found";
	return 0;
}


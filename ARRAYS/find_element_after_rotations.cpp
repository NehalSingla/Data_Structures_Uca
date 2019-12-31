#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	int rotation=2;
	int ranges[rotation][2]={{0,2},{0,3}};
	int index=1;

	for(int i=rotation-1;i>=0;i--)
	{
	      int left=ranges[i][0];
	       int right=ranges[i][1];

		if(left<=index && right>=index)
		{
			if(index==left)
				index=right;
			else
				index--;
		}
	}
	cout<< arr[index];
	return 0;
}


#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int mycomp(string x,string y)
{
	string xy=x.append(y);
	string yx=y.append(x);

	return xy.compare(yx)>0?1:0;
}
void printlargest(vector<string>arr)
{
	sort(arr.begin(),arr.end(),mycomp);
		for(int i=0;i<arr.size();i++)
			cout<<arr[i];
}
int main(int argc,char *argv[])
{
	string str[argc];
	int k=0;
	vector<string>arr;
	for(int i=1;i<argc;i++)
		str[k++]=argv[i];
	for(int i=0;i<k;i++)
		cout<<str[i]<<endl;
	for(int i=0;i<k;i++)
		arr.push_back(str[i]);
	printlargest(arr);
	return 0;
}


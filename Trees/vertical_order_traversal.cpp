#include<iostream>
#include<stdlib.h>
#include<vector>
#include<map>
using namespace std;

class tree
{
	public:
		int key;
		tree *left;
		tree *right;
};
tree * newNode(int val)
{
	tree *temp=new tree();
	temp->key=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

tree *insert(tree *node,int value)
{
	if(node==NULL)
		return newNode(value);
       	if(value<node->key)
	node->left=insert(node->left,value);
          else if(value>node->key)
             node->right=insert(node->right,value);
          
	  return node;
}

void getOrder(tree *root,int hd,map<int,vector<int>>&m)
{
	if(root==NULL)
		return;
	m[hd].push_back(root->key);

	getOrder(root->left,hd-1,m);
	getOrder(root->right,hd+1,m);
}

void printVerticalOrder(tree *head)
{
	map<int,vector<int>>m;
	int hd=0;
	getOrder( head,hd,m);

	map<int, vector<int>> :: iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		for(int i=0;i<it->second.size();i++)
		{
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	tree *head=NULL;
	head=insert(head,50);
	insert(head,20);
	insert(head,40);
	insert(head,70);
	insert(head,60);
	insert(head,80);
        
	printVerticalOrder(head);
	return 0;
}



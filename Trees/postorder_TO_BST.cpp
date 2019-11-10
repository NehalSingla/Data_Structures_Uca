#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
		int data;
                node *next[2];
};


node *newnode(int val)
{
	node *temp=new node();
	temp->data=val;
	temp->next[0]=NULL;
	temp->next[1]=NULL;
	return temp;
}

node *insert(node *root,int val)
{
	if(root==NULL)
		return newnode(val);
	if(val>root->data)
		root->next[1]=insert(root->next[1],val);
	else if(val<root->data)
		root->next[0]=insert(root->next[0],val);
	return root;
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->next[0]);
		cout<<root->data<<" ";
			inorder(root->next[1]);
	}
}
int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;
	node *head=NULL;
	head=insert(head,atoi(argv[argc-1]));
	for(int i=argc-2;i>=1;i--)
	{
		insert(head,atoi(argv[i]));
	}
	inorder(head);
	return 0;
}

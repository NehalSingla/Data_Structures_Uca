#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
class node
{
	public:
		int data;
		node *next[2];
};

node *new_node(int val)
{
	node *temp=new node();
	temp->data=val;
	temp->next[0]=NULL;
	temp->next[1]=NULL;
	return temp;
}

node *insert(node *head,int val)
{
	if(head==NULL)
		return new_node(val);
	if(val>head->data)
		head->next[1]=insert(head->next[1],val);
	else if(val<head->data)
		head->next[0]=insert(head->next[0],val);
	return head;
}

void printLevelOrder(node *root)
{
	if(root==NULL)
		return;
	queue<node*>q;
	q.push(root);
	while(q.empty()==false)
	{
		int count=q.size();
                 while(count>0)
		 {
			 node *node=q.front();
			 cout<<node->data;
			 q.pop();
			 if(node->next[0]!=NULL)
				 q.push(node->next[0]);
			 if(node->next[1]!=NULL)
			
				 q.push(node->next[1]);
			 count--;
		 }
		 cout<<endl;
	}
}
 node * delete_nodes(node *root)
{
	if(root==NULL)
		return NULL;
	if(root->next[0]==NULL && root->next[1]==NULL)
	{
		free(root);
		return NULL;
	}
	root->next[0]=delete_nodes(root->next[0]);
	root->next[1]=delete_nodes(root->next[1]);
	return root;
}
		 
void delete_parent_node(node *root,int val)
{




int main(int argc,char *argv[])
{
	int arr[argc-1];
	int k=0;

	node *head=NULL;
	head=insert(head,atoi(argv[1]));
			for(int i=2;i<argc;i++)
			{
			insert(head,atoi(argv[i]));
			}
	printLevelOrder(head);
	delete_nodes(head);
	cout<<"after deleting leaf nodes"<<endl;
	printLevelOrder(head);
	delete_parent_node(head,2);
        return 0;
	}	

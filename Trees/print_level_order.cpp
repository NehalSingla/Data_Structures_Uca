#include<iostream>
#include<queue>
using namespace std;
class node
{
	public:
	int data;n
	node *next[2];
};
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
		cout<<node->data<<" ";
		q.pop();
		if(node->next[0]!=NULL)
		{
			q.push(node->next[0]);
		}
		if(node->next[1]!=NULL)
			q.push(node->next[1]);
		count--;
	}
	cout<<endl;
	}
}

node *newNode(int data)
{
	node *temp=new node;
	temp->data=data;
	temp->next[0]=NULL;
	temp->next[1]=NULL;
}
int main(int argc,char *argv[])
{
	node *root=newNode(1);
	root->next[0]=newNode(2);
	root->next[1]=newNode(3);
	root->next[0]->next[0]=newNode(4);
       root->next[0]->next[1]=newNode(5);
       root->next[1]->next[1]=newNode(6);
       printLevelOrder(root);
       return 0;
}

	  



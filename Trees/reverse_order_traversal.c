#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node * newNode(int val)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
int height(struct node *head)
{
	if(head==NULL)
		return 0;
	else
	{
		int left=height(head->left);
	         int right=height(head->right);

		 if(left>right)
			 return 1+left;
		 else
			 return 1+right;
	}
}

void printLevel(struct node *head,int level)
{
	if(head==NULL)
		return;
	if(level==1)
		printf("%d ",head->data);
	else if(level>1)
	{
		printLevel(head->left,level-1);
		printLevel(head->right,level-1);
	}
}
void reverse(struct node *head)
{
	int h=height(head);
	for(int i=h;i>=1;i--)
		printLevel(head,i);
}

int main()
{
      struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
         reverse(root);
   // printf("%d",h);
    return 0;

}


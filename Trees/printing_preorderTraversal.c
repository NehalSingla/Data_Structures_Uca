#include<stdio.h>
#include<stdlib.h>


struct tree
{
        int data;
        struct tree *left;
        struct tree *right;
};

struct tree *newNode(int value)
{
        struct tree *temp=(struct tree *)malloc(sizeof(struct tree));
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
}
struct tree* insert(struct tree *head,int val)
{
        if(head==NULL)
        {
                return newNode(val);
        }
        if(val>head->data)
        {
                head->right=insert(head->right,val);
        }
        else if(val<head->data)
        {
                head->left=insert(head->left,val);
        }
        return head;
}


void preorder(struct tree *head)
{
        if(head!=NULL)
        {
	printf("%d ",head->data);
        preorder(head->left);
        preorder(head->right);
       
        }
}
int main()
{
        struct tree *head=NULL;
        head=insert(head,50);
        insert(head,20);
        insert(head,40);
        insert(head,70);
        insert(head,60);
        insert(head,80);
        preorder(head);
        return 0;
}




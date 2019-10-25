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


void postorder(struct tree *head)
{
        if(head!=NULL)
        {
        postorder(head->left);
        postorder(head->right);
        printf("%d ",head->data);
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
        postorder(head);
        return 0;
}



#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int st[],int val,int top)
{
	
	if(top==MAX-1)
		printf("\n OVERFLOW");
	 else
	 {
		 top++;
	         st[top]=val;
	 }
}

int pop(int st[],int top)
{
	if(top==-1)
	{
		printf("underflow");
		return -1;
	}
	else
	{
		
	         int val= st[top];
                top--;
	     return val;	
         }
}

int peek(int st[],int top)
{
	if(top==-1)
	{
		printf("Stack is empty");
	        return -1;
        }
	else
	{
		int val=st[top];
	        return val;
        }
}
void display(int st[],int top)
{
	if(top==-1)
		printf("Stack is empty");
	else
	{
	for(int i=top;i>0;i--)
	{
		printf("%d\n",st[i]);
         }
   
	}
}
int main(int argc,char *argv[])
{
	int st[MAX];
         
	int k=0;
	for(int i=1;i<argc;i++)
	{
		st[k++]=atoi(argv[i]);
	}
	int top=k-1;
	int value,option;
	do
	{
		printf("\n1.PUSH");
                printf("\n2.POP");
                printf("\n3.PEEK");
                printf("\n4.DISPLAY");
                printf("\n5.EXIT");
		scanf("%d",&option);
                switch(option)
		{
			case 1:
				printf("\nEnter the value u want to push");
				scanf("%d",&value);
				push(st,value,top);
				break;
			case 2:
			     
			     value=pop(st,top);
		             if(value!=-1)
			     printf("the value deleted from stack is %d",value);
		             break;

		        case 3:
		               value= peek(st,top);	 
				   if(value!=-1)
				       printf("Top Most Value is %d",value);
		                        break;
			case 4:
			        display(st,top);
		                 break;
		}
		}while(option!=5);

                     return 0;
	}
           	




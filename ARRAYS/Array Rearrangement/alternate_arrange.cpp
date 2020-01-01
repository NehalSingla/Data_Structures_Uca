#include<iostream>
#include<stdlib.h>

void swap(int arr[],int left,int right)
{
    int temp=arr[right];
    arr[right]=arr[left];
    arr[left]=temp;
}
void separate_num(int arr[],int size)
{
    int left=0,right=size-1;
    while(right>left)
    {
        while(arr[left]>0)
        left++;
        while(arr[right]<0)
        right--;
        if(left<right)
        {
            swap(arr,left,right);
        }
    }
     /*for(int i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("%d",arr[size-1]);*/
}
void rearrange(int arr[],int size )
{
    
    separate_num(arr,size);
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            index=i;
            break;
        }
    }
    for(int j=1;(j<index)&&(arr[j]>0);j+=2)
    {
        swap(arr,index,j);
        index++;
       
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    //printf("%d",arr[size-1]);
}
int main(int argc,char *argv[])
{
    int arr[argc-1];
    int k=0;
    for(int i=1;i<argc;i++)
    {
        arr[k++]=atoi(argv[i]);
    }
    rearrange(arr,k);
    return 0;
}
    

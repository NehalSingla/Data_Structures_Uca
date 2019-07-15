#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int arr[argc-1];
    int k=0;
    for(int i=1;i<argc;i++)
    {
    arr[k++]=atoi(argv[i]);
    }
    for(int i=0;i<k;i++)
    {
    printf("%d",arr[i]);
    }
    // reverse array
    printf("\nreverse array is :\n");
    for(int i=k-1;i>=0;i--)
    {
        printf("%d ",arr[i]);

    }
    int j=0;
    int arr1[argc-1];
    for(int i=0;i<argc;i++)
    {

        if(arr[i]>0)
        {

            arr1[j]=arr[i];
            j+2;

        }
        else
        {
             arr[j]=arr[i];
            j+2;

        }
    }
           for(int i=0;i<argc;i++)
           {

               printf("%d ",arr1[i]);
           }


    return 0;
}

#include<stdio.h>
int main()
{
    printf("Enter no of elements :");
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :");
        scanf("%d",&arr[i]);
    }
    printf("Enter value to search : ");
    scanf("%d",&x);

    int low=0,high=n-1;
    int mid = (low+high)/2;

    while(low<=high)
    {
        if(arr[mid]==x)
        {
            printf("%d present at index %d",x,mid+1);
            break;
        }
        else if(x>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        mid = (low+high)/2;
    }
    return 0;
}

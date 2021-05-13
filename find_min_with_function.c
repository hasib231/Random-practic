#include<stdio.h>

int FindMin(int arr[],int n);

int main()
{
    int n,i;
    printf("array size?\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=FindMin(arr,n);
    printf("Min = %d\n",min);
    return 0;
}

int FindMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

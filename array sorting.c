#include<stdio.h>
int main()
{
    int i,j,n,temp=0;
    printf("enter the array size\n");
    scanf("%d",&n);
    int ara[n];
    printf("enter the array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(ara[i]>ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }

    }
    printf("After sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",ara[i]);

    }

}

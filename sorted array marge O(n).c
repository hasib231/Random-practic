#include <stdio.h>

int main()
{
    int n1,n2,n3,i,j;
    printf("n1 size\n");
    scanf("%d",&n1);
    printf("n2 size\n");
    scanf("%d",&n2);
    n3=n1+n2;
    int a[n1],b[n2],x[n3];

     printf("enter first array\n");
    for(i=0;i<n1;i++)
    {
       scanf("%d",&a[i]);
    }

    printf("enter second array\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int l=0,m=0,k=0;
    while(1)
    {
        if(k==n3)
        {
            break;
        }
        if(n1>n2){
            if(m<n2){
                if(a[l]<=b[m])
                {
                    x[k]=a[l];
                    printf("n1->a1 : k[%d] %d\n",k,x[k]);
                    l++;
                }
                else if(a[l]>b[m])
                {
                    x[k]=b[m];
                    printf("n1->b1 : k[%d] %d\n",k,x[k]);
                    m++;
                }
            }
            else{
                x[k]=a[l];
                printf("n1->a2 : k[%d] %d\n",k,x[k]);
                l++;
            }

        }
        else if(n1<n2){
            if(l<n1){
                if(a[l]<=b[m])
                {
                    x[k]=a[l];
                    printf("n2->a1 : k[%d] %d\n",k,x[k]);
                    l++;
                }
                else if(a[l]>b[m])
                {
                    x[k]=b[m];
                    printf("n2->b1 : k[%d] %d\n",k,x[k]);
                    m++;
                }
            }
            else{
                x[k]=b[m];
                printf("n2->b2 : k[%d] %d\n",k,x[k]);
                m++;
            }

        }

        k++;
    }

    for(i=0;i<n3;i++)
    {
        printf(" %d ",x[i]);
    }
}

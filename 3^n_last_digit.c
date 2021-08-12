#include<stdio.h>
int main()
{
    // 1 3 9 7 1 3 9 7

    int n;
    int values[4]={1,3,9,7};
    scanf("%d",&n);
    n=n%4;
    printf("%d n=%d\n",values[n],n);
    return 0;
}

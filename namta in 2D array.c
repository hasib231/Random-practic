#include<stdio.h>
int main()
{
    int namta[10][10],i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
                namta[i][j]=i*j;
        printf("%d * %d = %d\n",i,j,namta[i][j]);

        }
        printf("\n");
    }
}

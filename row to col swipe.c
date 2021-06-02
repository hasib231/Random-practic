#include<stdio.h>
int main()
{
    int ara[5][5] = {{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int i,j,sum=0;
    int ara2[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

            printf("%d ",ara[i][j]);
        }
        printf("\n");

    }
    printf("\n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

           ara2[j][i] =ara[i][j];
        }

    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

           printf("%d ",ara2[i][j]);
        }
        printf("\n");

    }
}


#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Number of students number:\n");
    scanf("%d",&n);
    int marks[4][n];
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
                printf("Enter %d term marks of %d th students:",i,j);
            scanf("%d",&marks[i][j]);
        }
    }

    for(j=1;j<=n;j++){
        marks[4][j]=marks[1][j]/4.0+marks[2][j]/4.0+marks[3][j]/2.0;
        printf("%d th students final marks: %d\n",j,marks[4][j]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int namta[10][10],i,j,sum=0,even=0,odd=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
                namta[i][j]=(i+1)*(j+1);
        printf("%d * %d = %d\n",i+1,j+1,namta[i][j]);

        }
        printf("\n");
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
        sum=sum+namta[i][j];
        if((namta[i][j])%2==0){
            even++;
        }
        else{
            odd++;
        }

        }
    }

    printf("Total sum = %d\n",sum);
    printf("Total even number = %d\n",even);
    printf("Total odd number = %d\n",odd);
}

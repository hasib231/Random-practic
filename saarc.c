#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100] = {"Bangladesh","India","Pakistan","Sri Lanka","Nepal","Bhutan","Malddives"};
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<strlen(saarc[i]);j++){
        printf("(%d,%d)=%c ",i,j,saarc[i][j]);
    }
    printf("\n");
    }
}

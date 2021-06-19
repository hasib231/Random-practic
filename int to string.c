#include<stdio.h>
#include<string.h>

int revers(int num)
{
    char ch[200];
    int x;
    sprintf(ch,"%d", num);
    strrev(ch);
    x=atoi(ch);
    return x;
}
int main()
{
    int n,m,rev1,rev2,sum=0,rev_sum;

    scanf("%d %d",&n,&m);
    rev1=revers(n);
    rev2=revers(m);
    sum=rev1+rev2;
    rev_sum=revers(sum);


    printf("%d\n",rev_sum);



}

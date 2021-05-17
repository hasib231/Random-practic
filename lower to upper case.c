#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int i;
    while(scanf("%s",&ch)!=EOF)
    {
        for(i=0;i<strlen(ch);i++){
        if(ch[i]>=97&&ch[i]<=122)
        {
            ch[i]='A' + (ch[i]-'a');
        }
        else if(ch[i]>=65&&ch[i]<=90){
            ch[i]=ch[i]+32;
        }
        }
        printf("%s\n",ch);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    int i,j,len;
    gets(s1);
    len=strlen(s1);
    for(i=0,j=len-1;i<len;i++,j--){
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("after reverse : %s\n",s2);

    if(strcmp(s1,s2)==0){
        printf("This word is palindrome\n");
    }
    else{
        printf("This word is not palindrome\n");
    }
}

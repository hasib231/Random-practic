#include<bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    cin>>str;
    for(int i=0;str[i];i++){
        if(i==0){
            if(str[i]>='a'&&str[i]<='z'){
                str[i]='A'+str[i]-'a';
            }
        }
        else{
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]=str[i]+32;
            }
        }
    }
    cout<<str<<endl;

    return 0;
}


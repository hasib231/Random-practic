#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,ct=0,mx,j=0;
    cin>>n;
    int arr[n],arr2[n]={0};
    for(i=0;i<n;i++){
        cin>>arr[i];
        arr2[j]+=1;
        if(arr[i-1]>arr[i]){
            j++;
        }
    }
    mx=arr2[0];
    for(i=1;i<j;i++){
        if(arr2[i-1]<arr2[i]){
            mx=arr2[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}

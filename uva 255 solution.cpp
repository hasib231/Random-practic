#include<iostream>
#include<cstdio>

using namespace std;


int main()
{
    int ara[8][8],i,j,k=0,king,queen,qmove,k1,k2,q1,q2,m1,m2;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            ara[i][j]=k;
            k++;
        }
    }

    while(scanf("%d %d %d",&king,&queen,&qmove)!=EOF)
    {
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(ara[i][j]==king)
                {
                    k1=i;
                    k2=j;
                }
                if(ara[i][j]==queen)
                {
                    q1=i;
                    q2=j;
                }
                if(ara[i][j]==qmove)
                {
                    m1=i;
                    m2=j;
                }
            }
        }


        if(king==queen)
        {
            cout<<"Illegal state"<<endl;
        }
        else if(queen==qmove)
        {
            cout<<"Illegal move"<<endl;
        }
        else if(q1!=m1 && q2!=m2)
        {
            cout<<"Illegal move"<<endl;
        }
        else if((k1==0&&k2==0)&&(m1==1&&m2==1)||(k1==7&&k2==0)&&(m1==6&&m2==1)||(k1==0&&k2==7)&&(m1==1&&m2==6)||(k1==7&&k2==7)&&(m1==6&&m2==6))
        {
            cout<<"Stop"<<endl;
        }
        else if((k1!=q1&&k2!=q2)&&((ara[m1][m2]==ara[k1+1][k2])||(ara[m1][m2]==ara[k1-1][k2])||(ara[m1][m2]==ara[k1][k2-1])||(ara[m1][m2]==ara[k1][k2+1])))
        {
            cout<<"Move not allowed"<<endl;
            cout<<"m1="<<m1<<" m2="<<m2<<" k1="<<k1<<" k2="<<k2<<endl;
            cout<<"qmove="<<ara[m1][m2]<<" king="<<ara[k1][k2]<<endl;
            //cout<<"qmove="<<ara[m1][m2]<<" king="<<ara[k1][k2+1]<<endl;
        }

        else if(q2==k2 && queen>king)
        {
            if(king>=qmove && m2==k2){
            cout<<"Illegal move"<<endl;
            }
            else if(m1==k1+1 && m2==k2)
            {
                cout<<"Move not allowed"<<endl;
            }
            else
            {
                cout<<"Continue"<<endl;
            }
        }

        else if(q2==k2 && queen<king)
        {
            if(king<=qmove && m2==k2){
            cout<<"Illegal move"<<endl;
            }
            else if(m1==k1-1 && m2==k2)
            {
                cout<<"Move not allowed"<<endl;
            }
            else
            {
                cout<<"Continue"<<endl;
            }
        }

        else if(q1==k1 && queen<king)
        {
            if(king<=qmove && m1==k1){
            cout<<"Illegal move"<<endl;
            }
            else if(m2==k2-1 && m1==k1)
            {
                cout<<"Move not allowed"<<endl;
            }
            else
            {
                cout<<"Continue"<<endl;
            }
        }

        else if(q1==k1 && queen>king)
        {
            if(king>=qmove && m1==k1){
            cout<<"Illegal move"<<endl;
            }
            else if(m2==k2+1 && m1==k1)
            {
                cout<<"Move not allowed"<<endl;
            }
            else
            {
                cout<<"Continue"<<endl;
            }
        }
        else
        {
            cout<<"Continue"<<endl;
        }

    }
    return 0;
}

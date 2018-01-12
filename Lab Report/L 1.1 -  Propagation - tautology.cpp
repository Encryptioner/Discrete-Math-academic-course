#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string s;
    //cin>>s;

    int p[]={0,0,1,1};
    int q[]={0,1,0,1};
    int AND[4],OR[4],XOR[4],notp[4],notq[4],implies[4],equivalence[4];

    for(i=0;i<4;i++)
    {
        AND[i]=p[i]&q[i];
        OR[i]=p[i]|q[i];
        XOR[i]=p[i]^q[i];
        notp[i]=!p[i];
        notq[i]=!q[i];
        if(p[i]==0 && q[i]==0)
        {
            implies[i]=1;
            equivalence[i]=1;
        }
        else if(p[i]==0 && q[i]==1)
        {
            implies[i]=1;
            equivalence[i]=0;
        }
        else if(p[i]==1 && q[i]==0)
        {
            implies[i]=0;
            equivalence[i]=0;
        }
        else
        {
            implies[i]=1;
            equivalence[i]=1;
        }
    }
    cout<<"\nTruth Table : \n\n";

    for(i=0;i<4;i++)
    {
        cout<<AND[i]<<" "<<OR[i]<<" "<<XOR[i]<<" "<<notp[i]<<" "<<notq[i]<<" "<<implies[i]<<" "<<equivalence[i]<<endl;
    }

    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:for(i=0;i<4;i++)
    {
        cout<<AND[i]<<" "<<OR[i]<<" "<<XOR[i]<<" "<<notp[i]<<" "<<notq[i]<<" "<<implies[i]<<" "<<equivalence[i]<<endl;
    }
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,n1,i,count,factor[2][10000],x,j,p,q,GCD;
    bool negative=false;

    j=2;
    while(j--)
    {
    cin>>n;
    x=-1;

    cout<<n<<" = ";
    if(n<0)
    {
        n=n*(-1);
        negative=true;
        cout<<-1<<" * ";
        factor[j][++x]=-1;
    }
    n1=n;
    count=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(i>3)
        {
            i++;
        }
        if(n%i==0)
        {
            if(count>0)
            {
                cout<<" * ";
                count=0;
            }
            while(n%i==0)
            {
                n=n/i;
                factor[j][++x]=i;
                count++;
                if(count>1)
                {
                    cout<<" * "<<i;
                }
                else
                {
                    cout<<i;
                }
            }
        }
    }
    if(n1==n && n==1)
    {
        cout<<1<<endl;
    }
    else if(n!=1)
    {
        if(n1!=n)
        {
            cout<<" * "<<n<<"\n";
        }
        else
        {
            cout<<n<<endl;
        }
        factor[j][++x]=n;
    }
    else
    {
        printf("\n");
    }
    negative=false;
    if(j==1)
    {
        q=x;
    }
    if(j==0)
    {
        p=x;
    }
    }
    GCD=1;
    i=j=0;
    while(1)
    {
        if(i>p || j>q)
        {
            break;
        }
        if(factor[0][i]==factor[1][j])
        {
            cout<<factor[0][i]<<" ";
            GCD*=factor[0][i];
            i++;
            j++;

        }
        else if(factor[0][i]<factor[1][j])
        {
            i++;

        }
        else
        {
            j++;
        }
    }
    cout<<"\nGCD = "<<GCD<<endl<<endl;
    main();
    return 0;
}


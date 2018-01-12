#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,n1,i,count;
    bool negative=false;

    while(cin>>n)
    {
    cout<<n<<" = ";
    if(n<0)
    {
        n=n*(-1);
        negative=true;
        cout<<-1<<" * ";
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
    }
    else
    {
        printf("\n");
    }
    negative=false;
    }
    return 0;
}

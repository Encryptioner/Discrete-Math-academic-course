#include<bits/stdc++.h>

using namespace std;

bool sieve[20000000];
long long int prime[1000000];

int main()
{
    long long int n,n1,i,j,count;
    bool negative=false;
    long long int max=sqrt(pow(2,31))+3000,max1,x;
    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=(i*i);j<max;j+=(2*i))
        {
            sieve[j]=1;
        }
    }

    x=0;
    prime[x]=2;
    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;
        }
    }

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
    for(i=0;prime[i]<=sqrt(n);i++)
    {
        if(n%prime[i]==0)
        {
            if(count>0)
            {
                cout<<" * ";
                count=0;
            }
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                count++;
                if(count>1)
                {
                    cout<<" * "<<prime[i];
                }
                else
                {
                    cout<<prime[i];
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


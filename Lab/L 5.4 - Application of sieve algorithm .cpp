#include<bits/stdc++.h>

using namespace std;

bool sieve[20000000];

long long int prime[1000000];

int main()
{
    time_t start,end;
    start=clock();

    long long int max=10000000;
    long long int i,j,n,count,max1,n1,i1,x;
    //cout<<sieve[577]<<" "<<sieve[40]<<" "<<sieve[77]<<endl;
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
    cout<<"Prime number in store = "<<x-1<<" and it is "<<prime[x]<<endl;
    cout<<"\nHow many prime number u wanna see? ";
    cin>>n;
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        //cout<<i+1<<". "<<prime[i]<<endl;
        printf("%lld. %lld\n",i+1,prime[i]);
    }
    cout<<"\n";
    end=clock();

    float time=((float)(end-start))/CLOCKS_PER_SEC;
    cout<<"\nTime = "<<time<<endl;
    return 0;
}

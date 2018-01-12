#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    int i,s;
    s=sqrt(n);
    if(n%2==0)
    {
        return false;
    }
    else
    {
    for(i=3;i<=s;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"\n";
    if(n==2)
    {
        cout<<n<<" is a prime number.\n\n";
    }
    else if(isprime(n)==false || n==0 || n==1)
    {
        cout<<n<<" is not a prime number.\n\n";
    }
    else
    {
        cout<<n<<" is a prime number.\n\n";
    }
    main();
    return 0;
}

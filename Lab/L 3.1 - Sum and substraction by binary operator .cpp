//#include <boost/utility/binary.hpp>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<bitset>
#include<iomanip>
#include<stdio.h>

#include<limits.h>
#define B(x) S_to_binary_(#x)

using namespace std;

static inline unsigned long long S_to_binary_(const char *s)
{
    unsigned long long i=0;
    while(*s)
    {
        i<<=1;
        i+=*s++-'0';
    }
    return i;
}
int main()
{
    int n;
    cin>>n;

    //int foo=B(n);
    int foo=B(001100101);
    printf("%d\n",foo);
    /*int n;
    cin>>n;
    while(n)//print binary value reversely
    {
        if(n&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        n>>=1;
    }
    printf("\n");

    /*int a;
    cin>>a;
    unsigned short b=BOOST_BINARY(10010);
    char buf[sizeof(b)*8+1];
    printf("hex : %04x, dec : %u, oct : %06o, bin : %16s\n",b,b,b,itoa(b,buf,2));

    /*int a,b,carry,sum;
    cin>>a>>b;
    carry=a&b;
    while(carry!=0)
    {
        sum=a^b;
        cout<<sum<<endl;
        carry=a&b;
        cout<<carry<<endl;
        a=sum;
        cout<<a<<endl;
        b=carry<<1;
        cout<<b<<endl;
    }
    printf("\n%x\n",sum);
    return 0;*/
    main();
}

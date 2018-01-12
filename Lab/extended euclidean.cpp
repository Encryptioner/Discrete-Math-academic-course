#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int x, y, d;
int extendedEulid(int a, int b)
{
    if(b==0)
    {
        x=1; y=0; d=a; // some extensions
        return a;
    }
    int ret = extendedEulid(b, a%b);     // GCD function
    int x1 = y;
    int y1 = x - (a/b) *y;
    x = x1;
    y = y1;
    return ret;
}

int main()
{
    int a, b;
    //while(1)
    //{
        //for(i=1;i<1000000;i++)12
            //for(j=1;j<=1000000;j++)
            //a=i, b=j;
    //}
    while(cin>>a>>b)
    {
        extendedEulid(a, b);
        printf("x = %d, y = %d, gcd()=%d\n", x, y, d);
    }
    return 0;
}


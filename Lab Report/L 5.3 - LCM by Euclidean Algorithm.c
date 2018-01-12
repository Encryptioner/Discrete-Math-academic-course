#include <stdio.h>
int main()
{
    int a,b,t,gcd,z,lcm;
    printf("Enter two positive natural number: \n");
    scanf("%d %d",&a,&b);
    z=a*b;
    if(a==0 && b==0)
        gcd=0;//???
    else
    {
        while(a!=0)
        {
            t=a;
            a=b%a;
            b=t;
        }
        gcd=b;
    }

    lcm=(z/gcd);


    printf("\nlcm (Least Common Multiple) is %d\n",lcm);
    return 0;
}



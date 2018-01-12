#include <stdio.h>
int main()
{
    int a,b,t,gcd,x;
    printf("Enter two positive natural number: \n\n");
    scanf("%d %d",&a,&b);
    //x=b%a;/*remainder(%)mark indicates vagsesh*/
    //printf("\n%d\n",x);
    {
        while(a!=0)
        {
            t=a;
            a=b%a;
            b=t;
            printf("\n%d %d\n\n",a,b);
        }
        gcd=b;
    }
    printf("\nGCD is %d\n\n",gcd);
    main();
    return 0;
}


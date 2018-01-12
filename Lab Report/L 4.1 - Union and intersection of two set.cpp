#include<stdio.h>

int main()
{
    bool r1[36],r2[36];
    int i;
    char c;
    for(i=0;i<36;i++)
    {
        r1[i]=0;
        r2[i]=0;
    }

    printf("Enter set A's element. press 'x' to stop: \n");
    while(scanf("%c",&c) && getchar() && c!='x')
    {
        if(c>='0' && c<='9')
        {
            r1[c-'0']=1;
        }
        else
        {
            r1[c-'A'+10]=1;
        }
    }
    printf("Enter set B's element. press 'x' to stop: \n");
    while(scanf("%c",&c) && getchar() && c!='x')
    {
        if(c>='0' && c<='9')
        {
            r2[c-'0']=1;
        }
        else
        {
            r2[c-'A'+10]=1;
        }
    }
    printf("\nSet A : ");
    for(i=0;i<36;i++)
    {
        printf("%d ",r1[i]);
    }
    printf("\nSet B : ");
    for(i=0;i<36;i++)
    {
        printf("%d ",r2[i]);
    }
    printf("\n\nA union B = ");
    for(i=0;i<36;i++)
    {
        if(r1[i]==1 || r2[i]==1)
        {
            if(i>=0 && i<=9)
            {
                printf("%d",i);
            }
            else
            {
                printf("%c",i+'A'-10);
            }
        }
    }
    printf("\n\nA intersection B = ");
    for(i=0;i<36;i++)
    {
        if(r1[i]==1 && r2[i]==1)
        {
            if(i>=0 && i<=9)
            {
                printf("%d",i);
            }
            else
            {
                printf("%c",i+'A'-10);
            }
        }
    }
    printf("\n");
    return 0;
}

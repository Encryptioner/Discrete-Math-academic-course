#include<stdio.h>
#include<math.h>

int CountInteger(int value,int b)
{
    int i, count = 0;
    for(i = 0; i < b ; i++)
    {
        if (value % 2 != 0)
        {
            count++;
        }
        value = value >> 1;
    }
    return count;
}

int main()
{
    int input;
    int one;
    int bits;
    printf("Please Enter value: ");
    while(scanf("%d",&input)==1)
    {
        bits=ceil((log2(input)));// or floor((log2(input)))+1;
        one = CountInteger(input,bits);
        printf("\nThe Number has \"%d\" 1's and \"%d\" 0's\n",one,bits-one);
    }
    return 0;
}


#include<stdio.h>
#include<math.h>

int CountInteger(int,int bits);

int main()
{
    int input,i;
    int one,lower,upper;
    int bits;
    printf("Please Enter value lower and upper: ");
    scanf("%d%d",&lower,&upper);
    int sumones = 0;
    int sumzeros=0;
    for(i=lower;i<=upper;i++)
    {
        bits=floor((log2(i)))+1;
        one = CountInteger(i,bits);
        printf("%d has \"%d\" 1's and \"%d\" 0's \n",one,bits-one);
        sumones= sumones+one;
        sumzeros= sumzeros+(bits-one);
    }
    printf("\nThe Number has \"%d\" 1's and \"%d\" 0's\n",sumones,sumzeros);
}
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

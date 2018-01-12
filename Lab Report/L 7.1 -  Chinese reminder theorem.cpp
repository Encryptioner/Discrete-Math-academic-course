#include <stdio.h>

int chinese_remainder(int *n, int *a, int len)
{
	int M, i, m = 1, sum = 0;

	for (i = 0; i < len; i++)
    {
        m *= n[i];
    }

	for (i = 0; i < len; i++)
    {
		M = m / n[i];
		sum += a[i] * (M%n[i]) * M;
	}
    printf("\nSum = %d\n\n",sum);
	return sum % m;
}

int main(void)
{
	int n[100];// = { 3, 5, 7 };
	int a[100];// = { 2, 3, 2 };

	int i,N;
	printf("How many? ");
	scanf("%d",&N);
	printf("Enter arbitrary a[i] pairwise relative prime and m[i] : \n");
	for(i=0;i<N;i++)
    {
        scanf("%d %d",&a[i],&n[i]);
    }

	printf("Simultaneous smallest positive integer solution = %d\n\n", chinese_remainder(n,a,N) );//sizeof(n)/sizeof(n[0])
	return 0;
}

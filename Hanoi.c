#include <stdio.h>
#include <process.h>
int main()
{
	int num, parity;
	scanf("%d",num);
	int i=0,j=0;
	parity = num%2 ? 1, 0; // if num is odd, move to 3rd rod first, if not to 2nd first;
	printf("%d %d\n", 0, 1+parity);
	parity = (parity+1)%2;// odd even transfer
	for( i=2; i<=num-1; i++ )
	{
		printf("%d %d\n", 0, 1+parity);
		for( j=1; j<=i-1; j++ )
		{
			printf("%d %d\n", 1+!parity, 1+parity);
		}
		parity = (parity+1)%2;
	}
	printf("%d %d\n", 0, 2);
	for( i=num-1; i>=2; i-- )
	{
		for( j=1; j<=i-1; j++ )
		{
			printf("%d %d\n", parity, !parity);
		}
		printf("%d %d\n", parity, 2);
		parity = (parity+1)%2;
	}
	printf("%d %d\n", parity, 2);
	system("pause");
	return 0;
}

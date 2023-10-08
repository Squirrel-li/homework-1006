#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;
	scanf("%d", &n);
	n %= 2;
	if (n)
	{
		printf("odd\n");
	}
	else
	{
		printf("even\n");
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num1, num2;

	scanf("%d%d", &num1, &num2);

	printf("%d", num1);
	num1 %= num2;
	if (num1)
	{
		printf(" is not a multiple of %d", num2);
	}
	else
	{
		printf(" is a multiple of %d", num2);
	}
	puts("");
	system("pause");
	return 0;
}
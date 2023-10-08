#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num1, num2, a;

	scanf("%d%d", &num1, &num2);

	a = num1 % num2;
	if (num1)
	{
		printf("%d is a multiple of %d", num1, num2);
	}
	else
	{
		printf("%d is not a multiple of %d", num1, num2);
	}
	puts("");
	system("pause");
	return 0;
}
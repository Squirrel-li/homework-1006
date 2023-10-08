#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[3];
	int sma, lar;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}

	sma = a[0];
	lar = a[0];
	for (int i = 1; i < 3; i++)
	{
		if (a[i] > lar)
		{
			lar = a[i];
		}
		if (a[i] < sma)
		{
			sma = a[i];
		}
	}

	printf("smallest:%d\nlargest:%d\n",sma, lar);
	system("pause");
	return 0;
}
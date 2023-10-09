#include <stdio.h>
#include <stdlib.h>


int main()
{
	float miles, cost, distance, fee, tolls;
	float totalcost;

	printf("Please enter your total miles driven per day:");
	scanf("%f", &miles);
	printf("Please enter your cost per liter of gasoline:");
	scanf("%f", &cost);
	printf("Please enter your average miles per liter:");
	scanf("%f", &distance);
	printf("Please enter your parking fees per day:");
	scanf("%f", &fee);
	printf("Please enter your tolls per day:");
	scanf("%f", &tolls);

	totalcost = (miles / distance)*cost + fee + tolls;

	printf("your total cost per day of driving to work is %1.f\n", totalcost);

	system("Pause");
	return 0;
}
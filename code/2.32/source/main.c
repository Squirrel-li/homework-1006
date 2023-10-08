#include <stdio.h>
#include <stdlib.h>


int main()
{
	float h, w;
	puts("Enter your height(m) and weight(kg)");

	scanf("%f%f", &h, &w);

	w /= h * h;

	printf("BMI %2.1f\n", w);

	printf("Underweight:\tless than 18.5\n");
	printf("Normal: \tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25.0 and 29.9\n");
	printf("Obese:\t \t30.0 and greater\n");

	system("pause");
	return 0;
}
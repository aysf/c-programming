#include <stdio.h>

int main()
{
	int radius;
	printf("please enter a radius: ");
	scanf("%i", &radius);
	
	double area=3.14159*(radius*radius);
	printf("the area of a circle with radius %i is %f\n",radius, area);
	
	return 0;
}

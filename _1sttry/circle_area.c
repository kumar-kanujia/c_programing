/* compute area of circle given an input redius
ankit
jan, 13 2021 , 2.57am
*/
#include <stdio.h>
#define PI 3.14159

int main()
{
	double area = 0.0 , radius = 0.0 ;
	printf("Enter Radius : ");
	scanf("%lf", &radius);
	area = PI*radius*radius;
	printf("radius of %lf meters; area is %lf sq. meters \n ", radius , area);
	return 0;
}

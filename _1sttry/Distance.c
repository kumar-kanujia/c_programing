/* Conversion Distance in Kilometers given in miles and yards
by Kumar
jan 13,2021 , 9.44 am
*/

#include <stdio.h>

int main(void)
{
	float miles , yards ;
	printf("Input how many miles and yards you want to convert in Kilometers. \n\n");
	scanf("%f%f", &miles , &yards);
	
	double kilometers;
	
	kilometers = 1.60934 * (miles + yards / 1760.0);
	printf(" \n A distance is %lf kilometers. \n\n",kilometers);
	return 0;
	
}

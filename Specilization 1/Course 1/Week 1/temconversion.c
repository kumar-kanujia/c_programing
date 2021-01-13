/* Conversion of temperature from Fahrenheit to Celsius
By kumar
c = (F-32)/1.8
jan 13,2021 10.11am
*/

#include <stdio.h>
int main(void)
{
	int fahrenheit , celsius;
	
	printf("Please enter Temperature in Fahrenheit  for conversion in Celcius Scale \n");
	scanf("%d",&fahrenheit);
	celsius = (fahrenheit - 32)/1.8 ; //Note that we have selected celcius as integer so if result come in float so it would get converted in integer
	printf("\n %d fahreneit is %d celsius. \n",fahrenheit,celsius);
	return 0;
	
}

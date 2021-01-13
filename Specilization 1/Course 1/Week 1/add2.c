/* Ready in two floats and print sum 
    kumar
    jan , 12 ,2021 . 11.35pm
*/
#include <stdio.h>
int main(void)
{
	float a , b , sum ;
	printf("Input two floats");
	scanf("%f%f",&a,&b);
	printf("a= %f , b = %f \n" , a, b);
	sum = a+b;
	printf("sum = %f\n\n", sum);
	return 0;
	pause();
}

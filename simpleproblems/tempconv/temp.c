#include <stdio.h>
#include <stdlib.h>
int main (){
	float celcius;
	printf("enter temp in celcius:");
	scanf("%f",&celcius);
	printf("fahrenheit of given temp is %f\n",(9/5*celcius)+32);
	return EXIT_SUCCESS;
	}

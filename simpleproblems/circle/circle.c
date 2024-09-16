#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(){
	float rad;
	printf("enter radius:\n");
	scanf("%f",&rad);
	printf("circumference is %f\n",2*PI*rad);
	printf("area of circle is %f\n",PI * rad *rad);
	return EXIT_SUCCESS;
	}




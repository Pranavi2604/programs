#include <stdio.h>
#include <stdlib.h>
int main(){
	float w,h;
	printf("ENTER WEIGHT IN KG AND HEIGHT IN METERS\n");
	scanf("%f %f",&w,&h);
    float bmi=w/(h*h);
	printf("bmi is %f\n",bmi);
	return EXIT_SUCCESS;
	}


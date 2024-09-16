#include <stdio.h>
#include <stdlib.h>
int main(){
	int s;
	printf("enter the score");
	scanf("%d",&s);
	if((s<=100)&&(s>=90)){
		printf("grade is A\n");
		}
	
    else if((s<=89)&&(s>=80)){
		printf("grade is B\n");
		}
	else if((s<=79)&&(s>=70)){
		printf("grade is C\n");
		}
	else if((s<=69)&&(s>=60)){
		printf("grade is D\n");
		} 
	else{
		printf("grade is FAIL\n");
		}
	return EXIT_SUCCESS;
	}

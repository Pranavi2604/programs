#include <stdio.h>
#include <stdlib.h>
#define max 5
int main(){
	int arr[max];
	printf("enter the elements:\n");
	for(int i=0;i<max;i++){
	scanf("%d",&arr[i]);
	}
	printf("printing  using indexes\n");
	for(int i=0;i<max;i++){
	printf("%d",arr[i]);
	}
	printf("\n");
	printf("printing using addresss\n");
	for(int i=0;i<max;i++){
	printf("%d",*(arr+i));
	}
	printf("\n");
	return 0;
	}



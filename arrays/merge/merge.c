#include <stdio.h>
#define max1 5
#define max2 3
int main(){
 	int arr1[max1];
	int arr2[max2];
	int size=max1+max2;
	int arr[size];
	printf("enter 5 elements in 1st array");
	
	for (int i =0;i<max1;i++){
	scanf("%d",&arr1[i]);
	}
	printf("enter 3  elements in 1st array");
	
	for (int i =0;i<max2;i++){
	scanf("%d",&arr2[i]);
	} 
	
	for (int i =0;i<max1;i++){
		arr[i]=arr1[i];
	}
	
	for (int i =0;i<max2;i++){
     arr[max1+i]=arr2[i];
	}
	
	for (int i =0;i<size;i++){
	printf("%d",arr[i]);
	}
	return 0;
	}

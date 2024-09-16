#include <stdio.h>
int main(){
	int size;
	printf("Enter the number of elemts u want to store in arr:\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elemts to store in array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		}
	int min=arr[0];
	for (int i=1;i<size;i++){
		if (arr[i]<min){
			min=arr[i];
			}
	}
	int max=arr[0];
	for (int i=1;i<size;i++){
		if(arr[i]>max){
		max=arr[i];
		}

	}
	printf("min is %d\n",min);
	printf("max is %d\n",max);

	}
	

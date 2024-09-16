#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	printf("enter the elements in array");
	for (int i=0;i<max;i++){
		scanf("%d",&arr[i]);
		} 
		int sum=0;
		int avg=0;
	for (int i=0;i<max;i++){
		sum=sum+arr[i];
		}
	avg=sum/max;
	printf("sum is %d and avg is %d\n",sum,avg);
	}
	

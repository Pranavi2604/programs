#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	printf("enter 5 elements");
	for (int i =0;i<max;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<max-1;i++){
		for(int j=i+1;j<max;j++){
			if (arr[i]>arr[j]){
			 int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
				}
			}
    
	for (int i =0;i<max;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
	}

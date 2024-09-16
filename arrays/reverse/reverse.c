#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	printf("Enter the elemnts");
	for (int i =0;i<max;i++){
	scanf("%d",&arr[i]);
	}
	for(int i =0;i<max/2;i++){
		int temp=arr[i];
		arr[i]=arr[max-1-i];
		arr[max-1-i]=temp;
		}
	for (int i =0;i<max;i++){
	printf("%d ",arr[i]);
	}
	return 0;
}
	

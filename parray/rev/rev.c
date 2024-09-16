
#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	printf("Enter the elemnts");
	for (int i =0;i<max;i++){
	scanf("%d",&arr[i]);
	} 
	int *ptr=arr;
	for(int i =0;i<max/2;i++){
		int temp=*(ptr+i);
		*(ptr+i)=*(ptr+max-i-1);
		*(ptr+max-i-1)=temp;
		}
	for (int i =0;i<max;i++){
	printf("%d ",arr[i]);
	}
	return 0;
	}

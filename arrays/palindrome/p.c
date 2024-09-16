
#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	int flag=0;
	int arr1[max];
	printf("Enter the elemnts");
	for (int i =0;i<max;i++){
	scanf("%d",&arr1[i]);
	}
	for (int i=0;i<max;i++){
	arr[i]=arr1[i];
	}
	for(int i =0;i<max/2;i++){
		int temp=arr[i];
		arr[i]=arr[max-1-i];
		arr[max-1-i]=temp;
		}
	for (int i =0;i<max;i++){
	if(arr1[i]!=arr[i]){
	flag=1;
	break;
	}
	}
	if(flag==1){
	printf("Not pal\n");
	}
	else{
	printf("yes pal\n");
	}
	return 0;
}

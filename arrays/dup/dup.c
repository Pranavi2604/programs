
#include <stdio.h>
#define max 6
int main(){
	int arr[max];
	int vis[max]={0};
	printf("enter 6 elements in array\n");
	for (int i =0;i<max;i++){
	scanf("%d",&arr[i]);
	} 
	for(int i =0; i<max;i++){
	int e=arr[i];
	if(vis[i]==0){
	for(int j=0;j<max;j++){
	if(arr[j]==e){
	vis[j]=1;
	}
	}
	printf("%d",e);
	}
	}
	printf("\n");
	return 0;
	}

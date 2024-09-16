#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	int vis[max]={0};
    printf("enter 5  elements");
	for (int i =0;i<max;i++){
	scanf("%d",&arr[i]);
	} 
	for(int i=0;i<max;i++){
	 int e=arr[i];
	 int count=0;
	 if(vis[i]==0){
	 for(int j=0;j<max;j++){
	 if (arr[j]==e){
	 	count++;
		vis[j]=1;
		}
		}
	printf("%d appeared %d times in array\n",e,count);
	} 
	}
   return 0;
   }


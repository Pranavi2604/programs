
#include <stdio.h>
#define max 5
int main(){
	int arr[max];
	int vis[max]={0};
	printf("Enter the elemnts");
	int *p=arr;
	int *v=vis;
	for (int i =0;i<max;i++){
	scanf("%d",&arr[i]);
	}
	for(int i =0;i<max;i++){
		if(*(v+i)==0){
			int e=*(p+i);
			int count=0;
		 for(int j=0;j<max;j++){
			if(*(p+j)==e){
			 *(v+j)=1;
			count++;
		}

}

}
}
}

#include <stdio.h>
#define row 3
#define col 3
int main(){
	int arr[row][col];
	int arr1[row][col];
	printf("enter elements 9 elemnts");
	for(int i =0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			}
		}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			 arr1[i][j]=arr[j][i];
			 }
			 }

	for(int i =0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",arr1[i][j]);
			}
			printf("\n");
		}
       return 0;
	   }

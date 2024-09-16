#include <stdio.h>
#define max 5
#define max1 10
int main() {
    int arr1[max];
    int arr2[max];
    int arr3[max1];
    int c=0;
    printf("enter 5 numbers:");
    for(int i=0;i<max;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter 5 numbers:");
    for(int i=0;i<max;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<max;i++){
        if(arr1[i]%2!=0){
            arr3[c]=arr1[i];
            c++;
        }
    }
    for(int i=0;i<max;i++){
        if(arr2[i]%2!=0){
            arr3[c]=arr2[i];
            c++;
        }
    }
    for(int i=0;i<c-1;i++){
        for(int j=i+1;j<c;j++){
            if(arr3[i]>arr3[j]){
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
   for(int i=0;i<c;i++){
        printf("%d ",arr3[i]);
    }
}

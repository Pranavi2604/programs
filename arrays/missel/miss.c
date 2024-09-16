#include <stdio.h>
 
int main() {
    int max;
    printf("enter the number of elemnts you want to enter:");
    scanf("%d",&max);
    int arr[max];
    printf("enter numbers upto %d:",max);
    for(int i=0;i<max;i++){
        scanf("%d",&arr[i]);
    }
       for(int i=1;i<=max;i++){
           int e=i;
           int flag=0;
           for(int j=0;j<max;j++){
               if(arr[j]==e){
                   flag=1;
                   break;
               }
           } 
           if(flag==0){
           printf("%d",e);
       }
       }

}

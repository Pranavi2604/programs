#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a;
	printf("Enter a positive number:\n");
	scanf("%d",&a);
	int temp=a;
 	int sum=0;
	int d=0;
	while(temp>0){
		d=d+1;
		temp=temp/10;
  }
  temp=a;
  while(temp>0){
    int digit=temp%10;
	int p=1;
	for(int i=1;i<=d;i++){
	p=p*digit;
	
	}
	sum=sum+p;
	temp=temp/10;
	}

if(sum==a){
printf("ARM\n");
}
else{
printf("NOT ARM\n");
}
return 0;
}

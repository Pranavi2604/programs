#include <stdio.h>
#include <math.h> 
int main(){
int a;
printf("enter a postive number:");
scanf("%d",&a);
int root=sqrt(a);
int f=(root)*(root);
int c=(root+1)*(root+1);
if(abs(a-f)<=abs(a-c)){

printf("%d\n",f);
}
else{
printf("%d\n",c);
}
return 0;
}


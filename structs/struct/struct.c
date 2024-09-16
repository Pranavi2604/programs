#include <stdio.h>
#include <string.h>
#define max 20
struct student{
    char name[max];
    int age :10;
    char grade;
};
typedef struct student stu;
int main() {
    stu s1;
    printf("enter name of the student");
    if(fgets(s1.name,max,stdin)!=NULL){
        int l=strlen(s1.name);
      if(l>0 && s1.name[l-1]=='\n'){
          s1.name[l-1]='\0';
          l--;
    } 
    int a;
    printf("enter the age:");
    scanf("%d",&a);
    s1.age=a;
    printf("enter the grade:");
    scanf(" %c",&s1.grade);
    printf("name is %s\n",s1.name);
    printf("age is %d\n",s1.age);
    printf("grade is %c\n",s1.grade);
    return 0;
}
else{
    return 1;
}
}

#include <stdio.h>
#include <string.h>
#define max 30
#define size 5
struct employee{
    unsigned int id;
    char name[max];
    unsigned int salary;
};
typedef struct employee emp;
void print(emp);
int main() {
    emp e1;
    printf("enter the name:\n");
    if(fgets (e1.name,max,stdin)==NULL){
        return 1;
    }
 
    else{
        int l1=strlen(e1.name);
        if(l1>0 && e1.name[l1-1] =='\n'){
            e1.name[l1-1]='\0';
            l1--;
        }
        printf("enter the employee id:\n");
        scanf("%u",&e1.id);
        printf("enter the salary:\n");
        scanf("%u",&e1.salary);
        print(e1);
       return 0; 
    }
} 
void print(emp e){
     printf("id is %u\n",e.id);
     printf("name is %s\n",e.name);
     printf("salary is %u\n",e.salary);
}

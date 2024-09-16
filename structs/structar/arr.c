#include <stdio.h>
#include <string.h>
#define max 30
#define size 5
struct book{
    int price;
    char author[max];
    char title[max];

};
typedef struct book book;
int main() {
    book b[size];
    printf("enter details of 5 books:\n");
    for(int i=0;i<size;i++){
    printf("enter name of author %d:\n",i+1);
    if(fgets(b[i].author,max,stdin)==NULL){
        return 1;
    }
    printf("enter title of book %d:\n",i+1);
    if(fgets(b[i].title,max,stdin)==NULL){
        return 1;
    }
    else{
 
        int l1=strlen(b[i].author);
        if(l1>0 && b[i].author[l1-1] =='\n'){
            b[i].author[l1-1]='\0';
            l1--;
        }
        int l2=strlen(b[i].title);
        if(l2>0 && b[i].title[l2-1]=='\n'){
            b[i].title[l2-1]='\0';
            l2--;
        } 
        printf("enter price of book %d:\n",i+1);
        scanf("%d",&b[i].price);
        while (getchar() != '\n');
    }
    }
    for(int i=0;i<size;i++){
             printf("name of %d  author is %s\n",i+1,b[i].author);
             printf("name of %d book is %s\n",i+1,b[i].title);
             printf("price of %d book is %d\n",i+1,b[i].price);
}
return 0;
}

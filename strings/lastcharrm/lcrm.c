#include <stdio.h>
#include <string.h>
 
#define MAX 50
 
 
 
int main() {
    int score = 0;
    char str[MAX];
    char cpy[MAX];
    char c;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 1;
    }
    else{
     printf("enter char to remeove last occurance:\n");
     scanf(" %c",&c);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    char *p=strrchr(str,c);
    int in=p-str;
    for(int i=in;i<len;i++){
        str[i]=str[i+1];
    }
    printf("%s",str);
} 
} 

#include <stdio.h>
#include <string.h>
 
#define MAX 50
 
 
 
int main() {
    int score = 0;
    char str[MAX];
    char cpy[MAX];
    char c;
    char r;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 1;
    }
    else{
     printf("enter char to replace first occurance:\n");
     scanf(" %c",&c);
     printf("repalce with:\n");
     scanf(" %c",&r);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    char *p=strchr(str,c);
    *p=r;

    printf("%s",str);
} 
}

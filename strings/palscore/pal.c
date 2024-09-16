#include <stdio.h>
#include <string.h>
#define MAX 50
int palcheck(char *cpy,int s);
int main() {
    int score=0;
    char str[MAX];
    char cpy[MAX];
    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 1;
    }
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
 
    for (int i = 0; i < len; i++) {
        if (i + 4 <= len) {  // Length 4 substring
            strncpy(cpy, str + i, 4);
            cpy[4] = '\0';
            score=palcheck(cpy,score);
        }
        if (i + 5 <= len) {  // Length 5 substring
            strncpy(cpy, str + i, 5);
            cpy[5] = '\0';
            score=palcheck(cpy,score);
        }
    }
    printf("Score: %d\n", score);
    return 0;
}
int palcheck( char *cpy, int s) {
    int len = strlen(cpy);
    char temp[len + 1];
    int j=0;
    for (int i = len-1;j<len && i >=0; i-- ){
        temp[j] = cpy[i];
        j++;
    }
    temp[len] = '\0';
    if (strcmp(cpy, temp) == 0) {
        if (len == 5) {
            s =s+ 10;
        } else if (len == 4) {
            s =s+ 5;
        }
    }
    return s;
}

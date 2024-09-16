 #include <stdio.h>
#include <stdlib.h>
int main(){
	char c;
	scanf(" %c",&c);
	switch(c) {
		case 'a':
		printf("vowel");
		break;
		case 'e':
		printf("vowel");
		break;
		case 'i':
		printf("vowel");
		break;
		case 'o':
		printf("vowel");
		break;
		case 'u':
		printf("vowel");
		break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("vowel");
		break;
		default:
        printf("constant");
		}
	return 0;
}

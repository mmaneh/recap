#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isConsonant(char c) {
   
    return isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void removeConsonants(char *str) {
  	int size = strlen(str);
	int j = 0;
	for (int i = 0; i < size; ++i) {
		if(!isConsonant(str[i])) {
			str[j++] = str[i];
		}
	}
   		
	str[j] = '\0';
}


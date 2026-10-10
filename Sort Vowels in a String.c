#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c) {
return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int compare(const void* a, const void* b) {
return *(char*)a - *(char*)b;
}

char* sortVowels(char* s) {
int n = strlen(s);
char vowels[n];
int count = 0;

for (int i = 0; i < n; i++) {
    if (isVowel(s[i])) {
        vowels[count++] = s[i];
    }
}

qsort(vowels, count, sizeof(char), compare);

int j = 0;

for (int i = 0; i < n; i++) {
    if (isVowel(s[i])) {
        s[i] = vowels[j++];
    }
}

return s;
}
#include <stdio.h>
#include <string.h>

int areStringsConcatenatedEqual(char *a, char *b) {
    char concatenated_1[200]; 
    char concatenated_2[200];

    strcat(concatenated_1, a);
    strcat(concatenated_1, b);

    strcat(concatenated_2, b);
    strcat(concatenated_2, a);

    return strcmp(concatenated_1, concatenated_2) == 0;
}

int main() {
    char string_a[101]; 
    char string_b[101];

    scanf("%s", string_a);
    scanf("%s", string_b);

    int result = areStringsConcatenatedEqual(string_a, string_b);

    if(result == 0)
        printf("true");
    else
        printf("false");

    return 0;
}
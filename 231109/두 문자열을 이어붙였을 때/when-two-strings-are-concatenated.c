#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char arr[2][100];
    char std[2][100];
    int i=0;
    for(i=0;i<2;i++){
        scanf("%s",arr[i]);
    }
    //printf("%s",arr[0]);
    strcat(std[0],arr[0]);
    strcat(std[0],arr[1]);
    strcat(std[1],arr[1]);
    strcat(std[1],arr[0]);
    if(strcmp(std[0], std[1])==0)
        printf("true");
    else
        printf("false");
    return 0;
}
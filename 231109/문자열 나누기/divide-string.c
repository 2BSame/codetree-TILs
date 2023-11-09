#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n,i,cun=0;
    char arr[10][1000];
    char std[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
        strcat(std, arr[i]);
    }
    int len=strlen(std);
    for(i=0;i<len;i++){
        printf("%c",std[i]);
        cun++;
        if(cun%5==0)
            printf("\n");
    }
    return 0;
}
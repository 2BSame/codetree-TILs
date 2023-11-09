#include <stdio.h>
#include <string.h>
int atoi(char s[]){
    int i;
    int num=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]>='0'&&s[i]<='9')
            num=num*10+(s[i]-'0');
        else
            return num;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    char arr[2][9];
    int i;
    for(i=0;i<2;i++)
        scanf("%s",arr[i]);
    printf("%d",atoi(arr[0])+atoi(arr[1]));
    return 0;
}
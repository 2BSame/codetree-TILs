#include <stdio.h>
#include <stdlib.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int i,j;
    int cun=0;
    int *str=NULL;
    int *str1=NULL;
    scanf("%d %d",&n,&m);
    str=(int *)malloc(sizeof(int)*n);
    str1=(int *)malloc(sizeof(int)*m);
    for(i=0;i<n;i++){
        scanf("%d",&str[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&str1[i]);
    }
    for(i=0;i<n;i++){
        if(str[i]==str[cun]){
            cun++;
            if(cun==m)
            break;
        }
        if(str[i]!=str[cun]){
            cun=0;
        }
    }
    free(str);
    free(str1);
    if(cun==m)
        printf("Yes");
    else
        printf("No");
    return 0;
}
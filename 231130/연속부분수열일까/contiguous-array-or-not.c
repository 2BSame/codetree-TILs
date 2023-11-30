#include <stdio.h>
#include <stdlib.h>
int judge(int n,int m,int *a,int *b){
    int i,j;
    int cun=0;
    for(i=0;i<n;i++){
        if(a[i]==b[cun]){
            cun++;
            if(cun==m)
            return cun;
        }
        else{
            cun=0;
        }
    }
    return cun;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int i,j;
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
    if(judge(n,m,str,str1)==m)
        printf("Yes");
    else
        printf("No");
    free(str);
    free(str1);
    return 0;
}
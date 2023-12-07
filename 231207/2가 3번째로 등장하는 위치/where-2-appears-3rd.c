#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    scanf("%d",&n);
    int i;
    int cun=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==2){
            cun++;
            if(cun==3)
                printf("%d",i+1);
        }
    }
    return 0;
}
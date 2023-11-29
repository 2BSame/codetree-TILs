#include <iostream>

#define MAX_N 100
#define MAX_X 100

using namespace std;

int n;
int a[MAX_N + 1], b[MAX_N + 1];

int blocks[MAX_X + 1];

int main() {
    // 입력
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    
    // 블럭을 특정 구간에 쌓아줍니다.
    for(int i = 1; i <= n; i++)
        for(int j = a[i]; j <= b[i]; j++)
            blocks[j]++;
    
    // 최댓값을 구합니다.
    int max = 0;
    for(int i = 1; i <= 100; i++)
        if(blocks[i] > max)
            max = blocks[i];
    
    cout << max;
    return 0;
}
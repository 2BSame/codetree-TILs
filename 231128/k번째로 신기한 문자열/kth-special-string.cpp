#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n, k;
string t;
int cnt;

string str[MAX_N];
string words[MAX_N];

// a가 b로 시작하는지를 확인합니다.
bool StartsWith(string a, string b) {
    // b의 길이가 더 길 수는 없습니다.
    if((int) a.size() < (int) b.size())
        return false;
    
    // b의 길이만큼 살펴보며, a와 문자열이 완벽히 동일한지 확인합니다.
    for(int i = 0; i < (int) b.size(); i++)
        if(a[i] != b[i])
            return false;
    
    // 전부 확인했는데도 오류가 없다면, prefix라 할 수 있습니다.
    return true;
}

int main() {
    // 변수 선언
    cin >> n >> k >> t;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        
        // 문자열 t로 시작하는 경우인지 확인하고,
        // 그 경우에만 목록에 넣어줍니다.
        if(StartsWith(str[i], t))
            words[cnt++] = str[i];
    }
    
    // 정렬을 진행합니다.
    sort(words, words + cnt);
    
    cout << words[k - 1];
    return 0;
}
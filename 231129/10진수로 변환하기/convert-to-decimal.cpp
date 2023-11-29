#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    string binary;
    cin >> binary;
    
    // 십진수로 변환합니다.
    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * 2 + (binary[i] - '0');
    
    // 출력
    cout << num;
    return 0;
}
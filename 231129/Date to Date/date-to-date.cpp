#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    int m=m1;
    int d=d1;
    int day=1;
    int num[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(true){
        if(m==m2 && d==d2 )
        break;
        d++;
        day++;
        if(d>num[m]){
            m++;
            d=1;
        }
    }
    cout<<day;
    return 0;
}
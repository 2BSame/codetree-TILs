#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int cnt=0;
    cin>>a>>b>>c;
    int d=11;
    int h=11;
    int m=11;
    if(a>d || b>h || m>c){
    while(true){
        if(a==d&&b==h&&c==m)
        break;
        m++;
        cnt++;
        if(m>=60){
            h++;
            m=0;
        }
        if(h>=24){
            d++;
            h=0;
        }
    }
    cout<<cnt;
    }
    else
    cout<<"-1";
    return 0;
}
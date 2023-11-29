#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요
    int a,b,c,d; 
    cin>>a>>b>>c>>d;
    int h=a;
    int m=b;
    int cun=0;
    while(true){
        if(h==c && m==d )
        break;
        m++;
        cun++;
        if(m%60==0){
            h++;
            m=0;
        }
    }
    cout<<cun;
    return 0;
}
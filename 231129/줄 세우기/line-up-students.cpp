#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#define MAX 1000
using namespace std;

class num{
    public:
    int h,w,m;
    num(int h,int w,int m){
        this->h=h;
        this->w=w;
        this->m=m;
    }
    num(){}
};
num am[MAX];
bool cmp(num a,num b){
    return make_tuple(a.h, a.w, a.m) > make_tuple(b.h, b.w, b.m);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int h,w;
        int m=1+i;
        cin>>h>>w;
        am[i]=num(h,w,m);
    }
    sort(am,am+n,cmp);
    for(int i=0;i<n;i++){
        cout<<am[i].h<<" "<<am[i].w<<" "<<am[i].m<<endl;
    }
    return 0;
}
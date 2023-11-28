#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#define MAX 5
using namespace std;
class cc{
    public:
    string str;
    int h;
    double w;
    cc(string str,int h,double w){
        this->str=str;
        this->h=h;
        this->w=w;
    }
    cc(){}
};
cc cun[MAX];
bool cmp(cc a,cc b){
    return make_tuple(a.str) < make_tuple(b.str);
}
bool cmp1(cc a,cc b){
    return make_tuple(a.h) > make_tuple(b.h);
}
int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<MAX;i++){
        string str;
        int h;
        double w;
        cin>>str>>h>>w;
        cun[i]=cc(str,h,w);
    }
    sort(cun,cun+MAX,cmp);
    cout<<"name"<<endl;
    for(int i=0;i<MAX;i++){
        cout<<cun[i].str<<" "<<cun[i].h<<" "<<cun[i].w<<endl;
    }
    cout<<endl;
    cout<<"height"<<endl;
    sort(cun,cun+MAX,cmp1);
    for(int i=0;i<MAX;i++){
        cout<<cun[i].str<<" "<<cun[i].h<<" "<<cun[i].w<<endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#define MAX 10
using namespace std;
class name{
    public:
    string str;
    int ko,en,ma;
    name(string str,int ko,int en,int ma){
        this->ko=ko;
        this->str=str;
        this->en=en;
        this->ma=ma;
    }
    name(){}
};
name cun[MAX];
bool cmp(name a,name b){
    return a.ko+a.en+a.ma < b.ko+b.en+b.ma;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        int ko,en,ma;
        cin>>str>>ko>>en>>ma;
        cun[i]=name(str,ko,en,ma);
    }
    sort(cun,cun+n,cmp);
    for(int i=0;i<n;i++){
        cout<<cun[i].str<<" "<<cun[i].ko<<" "<<cun[i].en<<" "<<cun[i].ma<<endl;
    }
    return 0;
}
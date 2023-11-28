#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#define MAX 10
using namespace std;

class cum{
    public:
    string name;
    int kor, en, ma;
    cum(string name,int kor,int en,int ma){
        this->name=name;
        this->kor=kor;
        this->en=en;
        this->ma=ma;
    }
    cum(){}
};
cum cu[MAX];
bool cmp(cum a,cum b){
    return make_tuple(a.kor, a.en, a.ma) > make_tuple(b.kor, b.en, b.ma);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int kor, en, ma;
        cin>>name>>kor>>en>>ma;
        cu[i]=cum(name,kor,en,ma);
    }
    sort(cu,cu+n,cmp);
    for(int i=0;i<n;i++){
        cout<<cu[i].name<<" "<<cu[i].kor<<" "<<cu[i].en<<" "<<cu[i].ma<<endl;
    }
    return 0;
}
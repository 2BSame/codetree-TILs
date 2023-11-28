#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#define MAX 10
using namespace std;
class nc{
    public:
    string name,h,w;
    nc(string name, string h,string w){
        this->name=name;
        this->h=h;
        this->w=w;
    }
    nc(){}
};
nc cun[MAX];
bool cmp(nc a,nc b){
    return make_tuple(a.h, b.w) < make_tuple(b.h, a.w);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        string h;
        string w;
        cin>>name>>h>>w;
        cun[i]=nc(name,h,w);
    }
    sort(cun,cun+n,cmp);
    for(int i=0;i<n;i++){
        cout<<cun[i].name<<" "<<cun[i].h<<" "<<cun[i].w<<endl;
    }
    return 0;
}
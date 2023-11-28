#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class cmp{
    public:
        string name;
        int cm,kg;
    cmp(string name,int cm, int kg){
        this->name=name;
        this->cm=cm;
        this->kg=kg;
    }
    cmp(){}
};
cmp Cm[10];
bool so(cmp a,cmp b){
    return a.cm < b.cm;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int cm;
        int kg;
        cin>>name>>cm>>kg;
        Cm[i] = cmp(name,cm,kg);
    }
    sort(Cm,Cm+n,so);
    for(int i=0;i<n;i++){
        cout<<Cm[i].name<<" "<<Cm[i].cm<<" "<<Cm[i].kg<<endl;
    }
    return 0;
}
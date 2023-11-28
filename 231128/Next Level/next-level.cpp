#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    tuple<string,int> t=make_tuple("codetree",10);
    int lv;
    string name;
    tie(name,lv)=t;
    cout<<"user "<<name<<" lv "<<lv<<endl;
    cin>>name>>lv;
    t=make_tuple(name,lv);
    cout<<"user "<<name<<" lv "<<lv<<endl;
    return 0;
}
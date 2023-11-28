#include <iostream>
#include <string>

using namespace std;
class Nw{
    public:
        string name;
        string addr;
        string city;
    Nw(string name,string addr,string city){
        this->name=name;
        this->addr=addr;
        this->city=city;
    }
    Nw(){}
};
Nw cun[10];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        string addr;
        string city;
        cin >> name >> addr >> city;
        cun[i]= Nw (name,addr,city);
    }
    int last_idx = 0;
    for(int i = 1; i < n; i++) {
        if(cun[i].name > cun[last_idx].name)
            last_idx = i;
    }

    cout<<"name "<<cun[last_idx].name<<endl;
    cout<<"addr "<<cun[last_idx].addr<<endl;
    cout<<"city "<<cun[last_idx].city<<endl;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    class color{
        public:
            string str;
            char m;
            int num;
        color(string str,char m,int num)
        {
            this->str=str;
            this->m=m;
            this->num=num;
        }
        color(){}
    };
    string str;
    char m;
    int num;
    cin>>str>>m>>num;
    color cun= color(str,m,num);
    cout<<"code : "<<str<<endl;
    cout<<"color : "<<m<<endl;
    cout<<"second : "<<num<<endl;
    return 0;
}
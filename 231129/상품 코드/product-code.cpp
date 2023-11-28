#include <iostream>
#include <string>

using namespace std;

class Name{
    public:
        string str;
        int number;
        Name(string str,int number){
            this->str=str;
            this->number=number;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Name names1 = Name("codetree",50);

    string str2;
    int number2;
    cin >> str2 >> number2;

    Name names2 = Name(str2, number2);

    cout<<"product "<<names1.number<<" is "<<names1.str<<endl;
    cout<<"product "<<names2.number<<" is "<<names2.str;
    return 0;
}
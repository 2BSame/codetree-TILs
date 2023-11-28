#include <iostream>
#include <string>
#define MAX 100;
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cun1=MAX;
    int cun2;
    class Cun{
        public:
            char name;
            int num;

        Cun(char name='a', int num=0){
            this->name=name;
            this->num=num;
        }
    };
    Cun cuns[5];
    for(int i = 0; i < 5; i++) {
        int num;
        char name;
        cin >> name >>num;
        cuns[i] = Cun(name, num);
        if(num <= cun1){
            cun2=i;
            cun1=num;
        }
    }
    Cun judge = cuns[cun2];
    cout<<judge.name<<" "<<judge.num<<endl;
    return 0;
}
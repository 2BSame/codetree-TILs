#include <iostream>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    class tree{
        public:
            string code, point;
            int time;
        tree(string c, string p, int t){
            this-> code = c;
            this-> point = p;
            this-> time = t;
        }
    };
    string str;
    string n;
    int m;
    cin >> str >> n >> m;
    tree re = tree(str,n,m);
    cout<<"secret code : "<<re.code<<endl;
    cout<<"meeting point : "<<re.point<<endl;
    cout<<"time : "<<re.time<<endl;
    return 0;
}
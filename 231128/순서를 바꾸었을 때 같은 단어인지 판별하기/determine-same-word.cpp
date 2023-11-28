#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1;
    string str2;

    cin >> str1 >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str.compare(str2)==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
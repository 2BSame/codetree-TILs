#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    int height;
    int weight;
    int index;

    Student(int h, int w, int i) : height(h), weight(w), index(i) {}

    // 키가 작은 순으로, 키가 같다면 몸무게가 큰 순으로, 그리고 번호가 작은 순으로 정렬
    bool operator<(const Student& other) const {
        if (height != other.height) {
            return height < other.height;
        }
        if (weight != other.weight) {
            return weight > other.weight;
        }
        return index < other.index;
    }
};

int main() {
    int N;
    cin >> N;

    vector<Student> students;
    for (int i = 1; i <= N; ++i) {
        int h, w;
        cin >> h >> w;
        students.push_back(Student(h, w, i));
    }

    // 정렬
    sort(students.begin(), students.end());

    // 결과 출력
    for (const auto& student : students) {
        cout << student.height << ' ' << student.weight << ' ' << student.index << '\n';
    }

    return 0;
}
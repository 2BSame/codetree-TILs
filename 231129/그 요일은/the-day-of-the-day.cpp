#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // 입력 받기
    int m1, d1, m2, d2;
    string day_of_week;
    cin >> m1 >> d1 >> m2 >> d2 >> day_of_week;

    // 시작일과 종료일 설정
    struct tm start_date = {0, 0, 0, d1, m1 - 1, 2024 - 1900};
    struct tm end_date = {0, 0, 0, d2, m2 - 1, 2024 - 1900};

    // 시작일부터 종료일까지의 일수 계산
    time_t start_time = mktime(&start_date);
    time_t end_time = mktime(&end_date);
    double days_difference = difftime(end_time, start_time) / (60 * 60 * 24);

    // A 요일이 등장하는 횟수 계산
    int count = 0;
    for (int i = 0; i <= days_difference; ++i) {
        struct tm* time_info = localtime(&start_time);
        int day_of_week_number = time_info->tm_wday;

        // 요일 비교
        string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        if (days[day_of_week_number] == day_of_week) {
            count++;
        }

        start_time += 24 * 60 * 60; // 다음 날로 이동
    }

    // 결과 출력
    cout << count << endl;

    return 0;
}
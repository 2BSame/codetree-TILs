#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WeatherData {
public:
    string date;
    string day;
    string weather;

    WeatherData(string date, string day, string weather)
        : date(date), day(day), weather(weather) {}
};

int compareDates(const string &date1, const string &date2) {
    return date1.compare(date2);
}

int main() {
    int n;
    cin >> n;

    vector<WeatherData> data;
    string earliestRainDate = "9999-12-31";  // 초기값을 날짜 범위에서 가장 늦게 설정

    for (int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        data.push_back(WeatherData(date, day, weather));

        // 비가 오는 경우, 가장 빠른 날짜를 저장
        if (weather == "Rain" && compareDates(date, earliestRainDate) < 0) {
            earliestRainDate = date;
        }
    }

    // 가장 빠른 날짜의 비 정보 출력
    for (const auto &entry : data) {
        if (entry.date == earliestRainDate) {
            cout << entry.date << " " << entry.day << " " << entry.weather << endl;
            break;
        }
    }

    return 0;
}
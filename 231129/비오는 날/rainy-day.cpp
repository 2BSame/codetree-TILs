#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

class WeatherData {
public:
    string date;
    string day;
    string weather;

    WeatherData(string date, string day, string weather)
        : date(date), day(day), weather(weather) {}
};

int main() {
    int n;
    cin >> n;

    vector<WeatherData> data;
    int minRainIndex = INT_MAX;

    for (int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        data.push_back(WeatherData(date, day, weather));

        // 비가 오는 경우, 가장 빠른 날짜의 인덱스를 저장
        if (weather == "Rain" && i < minRainIndex) {
            minRainIndex = i;
        }
    }

    // 가장 빠른 날짜의 비 정보 출력
    WeatherData earliestRain = data[minRainIndex];
    cout << earliestRain.date << " " << earliestRain.day << " " << earliestRain.weather << endl;

    return 0;
}
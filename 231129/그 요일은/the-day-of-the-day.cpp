#include <iostream>
#include <string>

using namespace std;

int count_occurrences(int m1, int d1, int m2, int d2, const string& start_day) {
    int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int start_index = 0;
    for (int i = 0; i < 7; ++i) {
        if (days_of_week[i] == start_day) {
            start_index = i;
            break;
        }
    }

    int total_days = 0;
    for (int month = m1; month <= m2; ++month) {
        int end_day = (month != m2) ? days_in_month[month] : d2;
        for (int day = 1; day <= end_day; ++day) {
            if (day == d1 && month == m1) {
                total_days = (total_days + start_index) % 7;
            }
            if (total_days % 7 == 0) {
                start_index = (start_index + 1) % 7;
            }
            total_days++;
        }
    }

    return total_days / 7;
}

int main() {
    int m1, d1, m2, d2;
    string start_day;

    cin >> m1 >> d1 >> m2 >> d2;
    cin.ignore(); // Ignore the newline character
    getline(cin, start_day);

    int occurrences = count_occurrences(m1, d1, m2, d2, start_day);
    cout << occurrences << endl;

    return 0;
}
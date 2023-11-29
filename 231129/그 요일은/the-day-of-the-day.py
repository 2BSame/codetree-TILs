from datetime import datetime, timedelta

# 입력 받기
m1, d1, m2, d2 = map(int, input().split())
start_date = datetime(2024, m1, d1)
end_date = datetime(2024, m2, d2)
day_of_week = input()

# 요일 문자열을 숫자로 매핑
day_mapping = {'Mon': 0, 'Tue': 1, 'Wed': 2, 'Thu': 3, 'Fri': 4, 'Sat': 5, 'Sun': 6}
target_day = day_mapping[day_of_week]

# 날짜 범위 내에서 요일이 몇 번 등장하는지 계산
count = 0
current_date = start_date
while current_date <= end_date:
    if current_date.weekday() == target_day:
        count += 1
    current_date += timedelta(days=1)

# 결과 출력
print(count)
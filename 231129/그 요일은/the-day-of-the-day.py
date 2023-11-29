from datetime import datetime, timedelta

# 입력 받기
m1, d1, m2, d2 = map(int, input().split())
start_date = datetime(2024, m1, d1)
end_date = datetime(2024, m2, d2)
day_of_week = input()

# 요일 문자열을 숫자로 매핑
day_mapping = {'Mon': 0, 'Tue': 1, 'Wed': 2, 'Thu': 3, 'Fri': 4, 'Sat': 5, 'Sun': 6}
target_day = day_mapping[day_of_week]

# 시작 날짜부터 종료 날짜까지의 주 차이 계산
week_difference = (end_date - start_date).days // 7

# 시작 날짜의 요일과 목표 요일의 차이
start_day_difference = (target_day - start_date.weekday() + 7) % 7

# 결과 계산
result = week_difference + (start_day_difference <= (end_date.weekday() - target_day))

# 결과 출력
print(result)
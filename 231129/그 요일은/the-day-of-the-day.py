def count_occurrences(m1, d1, m2, d2, start_day):
    days_in_month = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

    days_of_week = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
    start_index = days_of_week.index(start_day)

    total_days = 0
    for month in range(m1, m2 + 1):
        end_day = days_in_month[month] if month != m2 else d2
        for day in range(1, end_day + 1):
            total_days += 1
            if total_days % 7 == 0:
                start_index = (start_index + 1) % 7

    return start_index


def main():
    m1, d1, m2, d2 = map(int, input().split())
    start_day = input().strip()

    occurrences = count_occurrences(m1, d1, m2, d2, start_day)
    print(occurrences)


if __name__ == "__main__":
    main()
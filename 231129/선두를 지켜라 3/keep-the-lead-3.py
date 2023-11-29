def honor_hall_changes(N, M, A_moves, B_moves):
    total_time = sum([t for v, t in A_moves])  # A가 총 이동한 시간
    changes = 0  # 명예의 전당 변경 횟수

    # 명예의 전당에 올라간 사람들을 기록하는 리스트
    hall_status = [0] * (total_time + 1)

    # A의 이동 정보를 처리하며 명예의 전당 변경 횟수를 갱신
    current_time = 0
    for v, t in A_moves:
        for _ in range(t):
            current_time += 1
            hall_status[current_time] = 1
            if hall_status[current_time] != hall_status[current_time - 1]:
                changes += 1

    # B의 이동 정보를 처리하며 명예의 전당 변경 횟수를 갱신
    current_time = 0
    for v, t in B_moves:
        for _ in range(t):
            current_time += 1
            hall_status[current_time] = 2
            if hall_status[current_time] != hall_status[current_time - 1]:
                changes += 1

    return changes

# 입력 받기
N, M = map(int, input().split())
A_moves = [tuple(map(int, input().split())) for _ in range(N)]
B_moves = [tuple(map(int, input().split())) for _ in range(M)]

# 결과 출력
result = honor_hall_changes(N, M, A_moves, B_moves)
print(result)
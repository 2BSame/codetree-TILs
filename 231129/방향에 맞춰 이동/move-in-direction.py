def final_position(N, moves):
    dx, dy = 0, 0  # 초기 위치는 (0, 0)

    # 각 이동방향에 대한 dx, dy 값 설정
    directions = {'N': (0, 1), 'S': (0, -1), 'E': (1, 0), 'W': (-1, 0)}

    # 입력받은 이동방향과 거리에 따라 최종 위치 계산
    for direction, distance in moves:
        x, y = directions[direction]
        dx += x * distance
        dy += y * distance

    return dx, dy

# 입력 받기
N = int(input())
moves = [input().split() for _ in range(N)]

# 결과 출력
result = final_position(N, moves)
print(*result)
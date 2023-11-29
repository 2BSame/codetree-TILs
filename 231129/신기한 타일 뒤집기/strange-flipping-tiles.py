def flip_tiles(colors, x, direction):
    # 왼쪽으로 뒤집는 경우
    if direction == "L":
        for i in range(x):
            colors[i] = not colors[i]
    # 오른쪽으로 뒤집는 경우
    elif direction == "R":
        for i in range(len(colors) - 1, len(colors) - 1 - x, -1):
            colors[i] = not colors[i]

# 초기 타일 상태 (모든 타일이 회색이라고 가정)
colors = [False] * 100

# 입력 받기
n = int(input().strip())
for _ in range(n):
    x, direction = input().split()
    x = int(x)
    flip_tiles(colors, x, direction)

# 결과 출력
white_count = colors.count(False)
black_count = colors.count(True)
print(white_count, black_count)
def convert_base(n, from_base, to_base):
    # 입력된 a진수를 10진수로 변환
    decimal_num = int(str(n), from_base)
    
    # 10진수를 b진수로 변환
    result = ""
    while decimal_num > 0:
        remainder = decimal_num % to_base
        result = str(remainder) + result
        decimal_num //= to_base
    
    return result

# 입력 받기
a, b = map(int, input().split())
n = input().strip()

# a진수로 주어진 수 n을 b진수로 변환하여 출력
result = convert_base(n, a, b)
print(result)
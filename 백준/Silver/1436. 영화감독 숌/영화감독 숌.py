import sys
input = sys.stdin.readline

n = int(input())
num = 666
count = 0

while True:
    # 숫자를 문자열로 바꿔서 '666'이 포함되어 있는지 확인
    if '666' in str(num):
        count += 1 # 666이 들어있는 숫자를 찾을 때마다 카운트
    
    if count == n: # n번째 숫자를 찾았다면 출력하고 종료
        print(num)
        break
        
    num += 1

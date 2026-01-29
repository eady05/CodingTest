import sys 
input = sys.stdin.readline

n = int(input())
cnt = 0

for _ in range(n):
    s = input().strip()
    arr = []
    flag = True 
    for c in s:
        if len(arr) > 0 and arr[-1] == c:
            continue
        else:
            if c in arr:
                flag = False
                break 
            else:
                arr.append(c)
    if flag:
        cnt += 1

print(cnt)
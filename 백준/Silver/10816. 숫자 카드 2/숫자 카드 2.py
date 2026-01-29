import sys
input = sys.stdin.readline

n = int(input())
cnt_dict = dict()
# nlist를 한 번만 순회하므로 list()로 감싸지 않아도 괜찮습니다.
nlist = map(int, input().split())

for nl in nlist:
    # 1. 수정: 키가 이미 있는지 확인 (KeyError 방지)
    if nl in cnt_dict: 
        cnt_dict[nl] += 1
    else:
        cnt_dict[nl] = 1

m = int(input())
mlist = map(int, input().split())

for ml in mlist:
    # 2. 수정: 파이썬에서는 '!' 대신 'not in' 또는 'in'을 사용합니다.
    if ml not in cnt_dict: 
        print(0, end=' ')
    else:
        print(cnt_dict[ml], end=' ')
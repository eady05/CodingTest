import sys

input = sys.stdin.readline

word=input().strip().upper()
cnt_dict = {}

for c in word:
  if c in cnt_dict:
    cnt_dict[c] += 1
  else:
    cnt_dict[c] = 1

mv = max(cnt_dict.values())

result = []
for c, count in cnt_dict.items():
  if(count == mv): 
    result.append(c)

if(len(result)>1):
  print("?")
else:
  print(result[0])



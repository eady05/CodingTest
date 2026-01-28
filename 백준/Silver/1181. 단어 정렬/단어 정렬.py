import sys

input = sys.stdin.readline

if __name__ == "__main__":
  n = int(input())
  s = []
  for _ in range(n):
    a = input().strip()
    s.append(a)
  s=list(set(s))
  s.sort(key=lambda x:(len(x),x))

  for word in s:
    print(word)
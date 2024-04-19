a, b = map(int, input().split())
total = 0
count = 0
for i in range(a):
    s = list(map(int, input().split()))
    s.sort()
    if s[-1]-s[0] >= b:
        count += 1
        total += int(sum(s)/3)
print(count, total)

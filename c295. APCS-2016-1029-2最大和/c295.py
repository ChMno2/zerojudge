a, b = map(int, input().split())
s = []
sum = 0
for i in range(a):
    f = list(map(int, input().split()))
    sum += max(f)
    s.append(max(f))
print(sum)
temp = 1

for i in range(len(s)):
    if (sum % s[i]) == 0:
        if temp == 0:
            print("", s[i], end="")
        else:
            print(s[i], end="")
        temp = 0

if temp:
    print(-1)
else:
    print()

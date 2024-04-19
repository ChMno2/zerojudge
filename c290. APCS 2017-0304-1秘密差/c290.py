
a = input()
t1 = 0
t2 = 0
temp = 0
for i in range(len(a)):
    temp += 1
    if temp % 2 == 1:
        t1 += int(a[i])
    else:
        t2 += int(a[i])
print(abs(t1-t2))

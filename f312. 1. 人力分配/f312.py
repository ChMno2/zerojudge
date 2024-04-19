import sys
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = int(input())
sum=-sys.maxsize - 1
for i in range(c+1):
    x1 = i
    y1 = c-i
    sum = max(sum, a[0]*x1*x1+a[1]*x1+a[2]+b[0]*y1*y1+b[1]*y1+b[2])
print(sum)

a = int(input())
while (a > 0):
    b = list(map(int, input().split()))
    print(b[0]-b[1])
    a -= 1

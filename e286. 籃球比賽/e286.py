a0 = list(map(int, input().split()))
b0 = list(map(int, input().split()))
a1 = list(map(int, input().split()))
b1 = list(map(int, input().split()))
temp = 0
if sum(a0) > sum(b0):
    temp += 1
else:
    temp -= 1
if sum(a1) > sum(b1):
    temp += 1
else:
    temp -= 1

print('{}:{}'.format(sum(a0), sum(b0)))
print('{}:{}'.format(sum(a1), sum(b1)))
if temp > 0:
    print("Win")
elif temp == 0:
    print("Tie")
else:
    print("Lose")

#https://zerojudge.tw/ShowProblem?problemid=d485
a, b = map(int, input().split())
print(int((b-a+2-a % 2-b % 2)/2))

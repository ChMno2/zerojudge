case = int(input())
for i in range(case):
    x = int(input())
    store = list(map(int,input().split()))
    store.sort()
    ans = 2*(store[-1]-store[0])
    print(ans)

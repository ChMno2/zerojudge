a = int(input())
while (True and a != 0):
    stack = []  
    while (True):
        b = list(map(int, input().split()))
        if b[0] == 0:
            print()
            break
        temp = 0
        for i in range(1, a+1):
            if temp<len(b) and i == b[temp]:
                temp += 1
            else:
                stack.append(i)
            while  temp<len(b) and stack and stack[-1] == b[temp]:
                temp += 1
                stack.pop(-1)
        if temp == a:
            print("Yes")
        else:
            print("No")
    a = int(input())
 


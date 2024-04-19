#https://zerojudge.tw/ShowProblem?problemid=c007
temp = 1
while True:
    try:
        a = input()
        for i in range(len(a)):
            if a[i] == "\"":
                if temp % 2 == 1:
                    print("``", end="")
                else:
                    print("''", end="")
                temp += 1
            elif a[i]=="\n":
                print()
            else:
                print(a[i], end="")
        print()
    except:
        break
    

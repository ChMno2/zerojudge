a = [1]*1000000


def w(i):
    if i == 1:
        return 1
    elif i % 2 != 0:
        result = 1 + w(3 * i + 1)
        return result
    else:
        result = 1 + w(i // 2)
        return result


while True:
    try:
        m = 0  # 記最大的
        c = 1  # 計算次數
        d, b = map(int, input().split())
        cycle_length = []
        print(d, b, end=" ")
        temp = 0
        for i in range(min(d, b), max(d, b)+1):
            if a[i] > 1:
                if a[i] > temp:
                    temp = a[i]
                continue
            count = 0
            a[i] = w(i)  # w[22]=9  將9存入a[22]
            if a[i] > temp:
                temp = a[i]
        print(temp)
        # print(a)
    except:
        break

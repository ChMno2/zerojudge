while(True):
    a=int(input())
    if a==0:
        break
    b=list(map(int,input().split()))
    count=0
    count1=0
    for i in range(len(b)):    
        count1+=abs(count)
        count+=b[i]
    count1+=count
    print(count1)

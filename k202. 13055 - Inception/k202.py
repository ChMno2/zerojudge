dream=[]
num=int(input())
while num:
    name=input()
    if name =="Sleep":
        continue
    else:
        num=num-1
        # print(name)
        if name=="Test":
            if dream == []:
                print("Not in a dream")
            else:
                a = str(dream[-1])
                # a.replace("Sleep", " ")
                print(a.replace("Sleep ", ""))
        elif name=="Kick":
            if dream == []:
                continue
            else:
                dream.pop()
        else:
            dream.append(name)

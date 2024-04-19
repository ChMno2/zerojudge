test=int(input())
for k in range(test):
 a=[]
 b=[]
 num=int(input())
 for j in range(num):
  a.append(int(input()))
  for i in range(2,len(a)):
   count=0
   for j in range(len(a)):
    if j>=j:
     count+=1
   b.append(count)
  print(sum(b))

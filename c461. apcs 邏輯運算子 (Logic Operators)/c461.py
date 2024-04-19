a,b,c = map(bool, map(int, input().split()))
print("AND\n"*(a&b==c)+"OR\n"*(a|b==c)+"XOR\n"*(a^b==c),end="")
if a&b==a|b==a^b!=c: print("IMPOSSIBLE")

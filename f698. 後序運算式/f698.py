def main():
    data = list(input().split())
    stack = []
    while (data != []):
        num_or_op = data.pop(0)
        try:  # int
            eval(num_or_op)
            stack.append(num_or_op)
        except:  # op
            b = stack.pop()
            a = stack.pop()
            stack.append(str(eval(a+num_or_op+b)))
    print(format(float(stack[0]), ".0f"))


main()

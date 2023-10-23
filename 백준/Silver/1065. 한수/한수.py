n = int(input())
if n < 10:
    print(n)

else:
    count = 9
    for i in range(10, n+1):
        num = str(i)
        diff = int(num[0]) - int(num[1])
        same = True
        for i in range(len(num)-1):
            if int(num[i]) - int(num[i+1]) != diff:
                same = False
                break
                
        if same:
            count += 1
            
    print(count)
            
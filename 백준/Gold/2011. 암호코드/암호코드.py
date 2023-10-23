PASSWORD = input()
LENGTH = len(PASSWORD)
CORRECT = 1
d = [0 for x in range(LENGTH+1)]

if PASSWORD[0] == '0':
    pass

else:
    d[0] = 1
    d[1] = 1
    for i in range(1, LENGTH):
        if int(PASSWORD[i]) != 0:
            d[i+1] += d[i]

        if int(PASSWORD[i-1:i+1]) == 0:
            break

        else: 
            if 10 <= int(PASSWORD[i-1:i+1]) <= 26:
                d[i+1] += d[i-1]

        
print(d[LENGTH] % 1000000)
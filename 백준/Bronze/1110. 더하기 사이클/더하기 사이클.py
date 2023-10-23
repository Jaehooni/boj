count = 0
num = int(input())
comparing_num = num
while True:
    if (comparing_num < 10):
        comparing_num = comparing_num * 10 + comparing_num
    
    else:
        comparing_num = comparing_num % 10 * 10 + (comparing_num // 10 + comparing_num % 10) % 10
        
    count += 1
    if (num == comparing_num):
        break
        
print(count)
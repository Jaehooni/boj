def divideSausage(number, divider):
    rest = divider - number;
    
    if (number % divider == 0):
        return 0
    
    elif (divider % number == 0):
        return (divider // number - 1) * number
    
    elif (number > divider):
        return divideSausage(number-divider, divider)
    
    else:
        return divideSausage(number, rest) + number;


a,b = map(int,input().split())

print(divideSausage(a,b))
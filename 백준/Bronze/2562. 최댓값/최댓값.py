tuple_arr = []
for i in range(1,10):
    tuple_arr.append((int(input()), i))
    
tuple_arr.sort(key= lambda x: -x[0])
print(tuple_arr[0][0])
print(tuple_arr[0][1])
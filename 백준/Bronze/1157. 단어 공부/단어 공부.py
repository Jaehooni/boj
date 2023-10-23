L = list(input())
alphabet_dict = dict(zip([chr(x) for x in range(65, 92)], [0 for _ in range(26)]))
alphabet_num = []
for i in L:
    if ord(i) >= 97:
        alphabet_dict[chr(ord(i)-32)] += 1

    else:
        alphabet_dict[i] += 1

alphabet_num = sorted(alphabet_dict.items(), key=lambda x:x[1], reverse=True)

max_num = alphabet_num[0][1]

if len(alphabet_num) == 1 or max_num > alphabet_num[1][1]:
    print(alphabet_num[0][0])

else:
    print('?')
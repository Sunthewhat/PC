num = [int(i) for i in input().split()]
alp = input()

num.sort()

for i in range(len(alp)):
    print(num[ord(alp[i])-65], end=" ")
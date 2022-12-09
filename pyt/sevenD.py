a = []
ans1 = int()
ans2 = int()
summ = int()
for i in range(9):
    b = int(input())
    a.append(b)
    summ += b
    

for i in range(9):
    for j in range(9):
        if (summ - 100) == (a[i] + a[j]) and i != j:
            ans1 = a[i]
            ans2 = a[j]
            break

a.remove(ans1)  
a.remove(ans2)

for i in range(7):
    print(int(a[i]))

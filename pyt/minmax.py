a = int(input())
minn = 2e9
maxx = -2e9
for i in range(a):
    b = int(input())
    minn = min(minn, b)
    maxx = max(maxx, b)

print(minn)
print(maxx)

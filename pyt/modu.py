ans = []
for i in range(10):
    b = int(input()) % 42
    ans.append(b)
ans = set(ans)
print(len(ans))
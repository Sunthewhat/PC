a = input()
c = 0
s = 0
for i in a:
    if i.isupper():
        c += 1
    elif i.islower():
        s += 1

if c == 0:
    print("All Small Letter")
elif s == 0:
    print("All Capital Letter")
else :
    print("Mix")
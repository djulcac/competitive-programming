s=input()
d=set()
for i in range(len(s)):
    d.add(s[i])
if len(d)%2==0: 
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
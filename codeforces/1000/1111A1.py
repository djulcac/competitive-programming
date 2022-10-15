# accepted
a = input()
b = input()
ans = True
if len(a)!=len(b):
    ans = False
if ans:
    for i in range(len(a)):
        if (a[i] in 'aeiou')!=(b[i] in 'aeiou'):
            ans = False
            break
if ans:
    print('Yes')
else:
    print('No')

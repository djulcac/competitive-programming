f=lambda:[x in 'aeiou' for x in input()]
if f()==f():
    print('Yes')
else:
    print('No')

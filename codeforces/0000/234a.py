def solve():
    with open("input.txt", 'r') as f:
        n = int(f.readline())
        s = f.readline()
        outputfile = open("output.txt", 'w')
        for i in range(int(n/2)):
            if s[i]=='L':
                outputfile.write(f"{i+1} {int(n/2+i+1)}\n")
            else:
                outputfile.write(f"{int(n/2+i+1)} {i+1}\n")
    

def init():
    T=1
    # T=int(input())
    while T:
        solve()
        # print(solve())
        T -=1
init()

N = input()
N = input()

A = list(map(int,input().split()))
B = list(map(int,input().split()))
m = 1000000000
for i in range(len(A)):
    n = map(min,list(map(abs,B - A[i])))
    if m>n :
        m=n
print(m)
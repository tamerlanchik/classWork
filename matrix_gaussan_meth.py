def outp(A):
    for i in A:
        for j in i:
            print(j, end=' ')
        print()

S=3
print("A: ")
A= [list(map(int, input().split())) for i in range(S)]
print("B: ")
B=[int(input()) for i in range(S)]
m=S
n=S+1
for i in range(len(B)):
    A[i].append(B[i])
outp(A)

for i in range(m):
    a=A[i][i]
    for j in range(i, n):
        A[i][j] /= a
    for j in range(i+1, m):
        a=A[j][i]
        for k in range(i, n):
        	    [j][k] -= A[i][k]*a
for i in range(m-1, -1, -1):
    for k in range(i-1, -1, -1):
        a=A[k][i]
        for j in range(n):
            A[k][j] -= A[i][j]*a

print("X: ")
for i in A:
    print(i[-1])
    

n=int(input())
m=int(input())
energy = [[int(input()) for x in range (m)] for y in range(n)]
confi = [[int(input()) for x in range (m)] for y in range(n)]

strength=[[0 for x in range (m+1)] for y in range(n+1)]
for i in range(n):
    for j in range(m):
        strength[i][j]=energy[n-1][i]
        strength[i][j]=energy[j][i] - confi[j][i] + strength[j+1][i];
        temp=strength[i][j]
        
print(temp)
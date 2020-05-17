n=3
cost=[[3,2,7],
      [5,1,3],
      [2,7,2]]
dp=[float('inf')]*(2**n)
dp[0]=0
for mask in range(2**n+1):
    x=bin(mask).count('1')
    for j in range(len(bin(mask))-2):
        if not (mask|(1<<j)):
            dp[mask | (1<<j)] = min(dp[mask | (1<<j)],dp[mask])+cost[x][j]

print(dp[2**n -1])

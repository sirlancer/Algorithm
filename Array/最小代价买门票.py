import sys
n, m, k = sys.stdin.readline().strip().split()
#maxN = 1005
dp = [int(k)*i for i in range(1,int(n)+2)]
for i in range(int(m)):
    x, y = sys.stdin.readline().strip().split()
    for j in range(int(n)+1):
        if j >= int(y):
            dp[j] = min(dp[j], int(x)+dp[j-int(y)])
        else:
            dp[j] = min(dp[j], int(x))
print(dp[int(n)])
        
        
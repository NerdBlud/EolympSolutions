n = int(input())
vouchers = [tuple(map(int, input().split())) for _ in range(n)]

N = 1 << n
dp = [0] * N
ans = 0

for mask in range(N):
    day = bin(mask).count('1') + 1
    for i in range(n):
        if not (mask & (1 << i)):
            d, c = vouchers[i]
            if day <= d:
                nmask = mask | (1 << i)
                profit = c * (d - day + 1)
                dp[nmask] = max(dp[nmask], dp[mask] + profit)
                ans = max(ans, dp[nmask])

print(ans)

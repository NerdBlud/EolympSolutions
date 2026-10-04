import math

n = int(input())

if n == 0:
    print(0)
else:
    k = int(n**(1/3))
    while (k+1)**3 <= n:
        k += 1
    while k**3 > n:
        k -= 1
    if n <= k * k * (k + 1):
        a = k
        b = k
        c = k
        rem = n - k**3
    elif n <= k * (k+1) * (k+1):
        a = k
        b = k
        c = k + 1
        rem = n - k * k * (k + 1)
    else:
        a = k
        b = k + 1
        c = k + 1
        rem = n - k * (k+1) * (k+1)
    result = a * (b+1) * (c+1) + b * (a+1) * (c+1) + c * (a+1) * (b+1)

    if rem > 0:
        s = int(math.isqrt(rem))

        if s > 0:
            t = rem // s
        else:
            t = 0

        left = rem - s * t

        result += (s+1) * (t+1) + s * (t+1) + t * (s+1)

        if left > 0:
            result += 3 * left + 2

    print(result)
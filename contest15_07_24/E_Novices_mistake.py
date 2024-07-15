for _ in range(int(input())):
    n = int(input())
    sn = str(n)
    lenN = len(str(n))
    ans = []
    for a in range(1, 10001):
        minB = max(1, lenN * a - 5)
        maxB = lenN * a
        for b in range(minB, maxB):
            x = n * a - b
            y = 0
            for i in range(lenN * a - b):
                y = y * 10 + int(sn[i % lenN])
            if x == y:
                ans.append((a, b))
    print(len(ans))
    for p in ans:
        print(*p)
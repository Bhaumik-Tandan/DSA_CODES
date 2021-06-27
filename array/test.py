t = int(input())
a = 1
r = []
while t+1 != a:
    n = int(input())
    ar = []
    p = 0
    for _ in range(n):
        ar.append(input())
    for i in range(1, len(ar)):
        key = ar[i]
        j = i-1
        while j >= 0 and key < ar[j]:
            ar[j+1] = ar[j]
            j -= 1
            p += 1
        ar[j+1] = key
    r.append(p)
    a += 1
for p in range(len(r)):
    print("Case #"+str(p+1)+": "+str(r[p]))

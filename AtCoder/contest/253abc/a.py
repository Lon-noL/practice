a, b, c = map(int,input().split())
#if a < b and c < b:
#    print("No")
#elif a > b and c > b:
#    print("No")
#else:
#    print("Yes")

m = sorted((a, b, c))[1]
print("Yes" if b == m else "No")

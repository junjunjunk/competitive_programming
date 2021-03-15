N,K=(int(i) for i in input().split())  

bw = [ 2**i for i in range(22)]

ans = 0.0

for i in range(1,N+1):
    for j in range(22):
        if(K<=i*bw[j]):
            ans += 1.0/bw[j]
            break

print(ans/N)

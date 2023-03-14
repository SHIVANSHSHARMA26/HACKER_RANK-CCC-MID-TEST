from math import sqrt
n,k=map(int,input().split())
N = 100005; 
isprime = [True] * N
can = [False] * N

for p in range(2, int(sqrt(N)) + 1) : 
    if (isprime[p] == True) : 
        for i in range(p * p, N , p) :  
            isprime[i] = False
            
primes = [] 
for i in range(2, N) : 
    if (isprime[i]): primes.append(i)
        
for i in range(len(primes) - 1) : 
    if (primes[i] + primes[i + 1] + 1 < N) : 
        can[primes[i] + primes[i + 1] + 1] = True
        
ans = 0 
for i in range(2, n + 1) :  
    if (can[i] and isprime[i]) :  
        ans += 1         
if(ans >= k): print("YES")
else: print("NO")

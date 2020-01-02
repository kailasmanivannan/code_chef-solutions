t = int(input())
while(t>0):
    zero = 0
    two = 0
    n = int(input())
    ar = []
    ar = list(map(int,input().split(" ")))
    for i in range(n):
        if(ar[i]==0):
            zero = zero + 1
        elif(ar[i]==2):
            two = two + 1 
    result = 0
    for i in range(zero):
        result = result + i
    for i in range(two):
        result = result + i 
    print(result)
    t = t - 1

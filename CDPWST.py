from itertools import combinations
testcase = int(input())
while (testcase>0):
    master_sum=0
    n = int(input())
    l=list(range(1,n+1))
    sum_n = 2+(n-1)
    sum_n = sum_n * (n/2)
    sum_n = int(sum_n * 2)
    for i in range(2,n):
        c = list(combinations(l,i))
        for j in range(len(c)):
            master_sum = master_sum + sum(c[j])
    master_sum = int(master_sum)
    master_sum = (master_sum + sum_n)%10000007
    print(master_sum)
    testcase = testcase - 1

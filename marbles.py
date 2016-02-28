def fact(n):
    n = int(n)
    factorial = 1
    if n<2:
        return factorial
    else:
        for i in range(1,n+1):
            factorial = factorial*i
    return factorial

t = raw_input()
t = int(t)
while t:
    n = int(raw_input())
    k = int(raw_input())
    if n==k:
        print 1
    else:
        result =1 
        for i in range(k-1):
            result = result*(n-1)
            n = n-1
        result = result/fact(k-1)
        print result
    t = t-1

    

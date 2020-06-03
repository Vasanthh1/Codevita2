for _ in range(int(input())):
    n = int(input())
    x,y=[],[]
    for i in range(n):
        xi,yi= map(int,input().split())
        x.append(xi)
        y.append(yi)
    print(max(abs(max(x)-min(x)),abs(max(y)-min(y)))**2)
    
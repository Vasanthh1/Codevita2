def bs(i,s,f):
    if s<=f:
        mid=(s+f)//2
        if l[mid]==i:
            return mid+1
        elif mid==0 and l[mid]>=i:
                return mid+1
        elif l[mid]>i and l[mid-1]<i:
            return mid+1
        elif l[mid]>i:
            return bs(i,s,mid-1)
        elif l[mid]<i:
            return bs(i,mid+1,f)
    else:
        return -1
n=int(input())
li=[int(i) for i in input().split()]
l=[0]*n
l[0]=li[0]
for i in range(1,n):
    l[i]=l[i-1]+li[i]
for _ in range(int(input())):
    k=int(input())
    print(bs(k,0,n-1))
n,m=(input().split())
n,d=int(n),int(m)
l=list()
for _ in range(n):
    i=int(input())
    l.append(i)
l.sort()
c=0
i=0
while i<n-1:
    if l[i+1]-l[i]<=d:
        i+=2
        c+=1
    else:
        i+=1
print(c)

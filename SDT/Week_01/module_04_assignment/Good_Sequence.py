n=int(input())
a=list(map(int,input().split()))

cnt ={}
for x in a:
    cnt[x]= cnt.get(x,0)+1

rmv = 0
for x,c in cnt.items():
    if c>=x:
        rmv+= c-x
    else:
        rmv+=c

print(rmv)
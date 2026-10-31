s = input().strip()

cnt1=0
cnt2=0
cur = ""
ans=[]

for ch in s:
    cur+=ch

    if ch=='L':
        cnt1+=1
    elif ch=='R':
        cnt2+=1


    if cnt1==cnt2:
        ans.append(cur)
        cur=""
        cnt1=0
        cnt2=0


print(len(ans))

for w in ans:
    print(w)
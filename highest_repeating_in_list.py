n=int(input())
s1=list(map(int,input().split()))
temp=s1[0]
t=0
for i in range(n):
  co=0
  for j in range(i,n):
    if s1[i]==s1[j]:
      co+=1
  if co>t:
    t=co
    temp=s1[i]
print(temp,end="")

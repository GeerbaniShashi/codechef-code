# cook your dish here

for _ in range(int(input())):
    p,l = map(int, input().split())
    answer = (l/p)*100
    if(answer >= 75):
        print("YES")
    else:
        print("NO")

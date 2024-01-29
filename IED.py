# cook your dish here
x,y,z = map(int, input().split())

answer = max(x*z, y*z)
print(answer)

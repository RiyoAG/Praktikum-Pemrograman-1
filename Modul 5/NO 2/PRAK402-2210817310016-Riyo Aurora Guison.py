a=int(input())
for i in range (1,a+1):
    if i % 2 !=0:
        print(i, end='')
print("\n")
while a > 0 :
    if a % 2 == 0 :
        print(a, end='')
    a-= 1
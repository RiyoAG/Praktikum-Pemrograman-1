import math
A,B = input(). split()
A =int(A)
B =int(B)
C =math.sqrt(B**2 - A**2)
T = A
K = A + B + C
L = C*T/2
print("Alas =",round(C),"cm")
print("Keliling =",round(K),"cm")
print("Luas =",round(L),"cm^2")

a =int(input())
b =int(input())
c =math.sqrt(b**2 - a**2)
t = a
k = a + b + c
l = c*t/2
print("Alas =",round(c),"cm")
print("Keliling =",round(k),"cm")
print("Luas =",round(l),"cm^2")
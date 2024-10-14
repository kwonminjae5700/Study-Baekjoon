import sys
input = sys.stdin.readline

n = int(input())

single = 0
triple = 0

for i in range(1, n+1):
    single += i
    triple += i**3

print(single)
print(single**2)
print(triple)
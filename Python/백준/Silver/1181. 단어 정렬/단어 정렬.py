N = int(input())

word = set()

for i in range(N):
    temp = input()
    
    word.add(temp)
    
arr = list(set(word))
arr.sort()
arr.sort(key = len)

for i in arr:
    print(i)
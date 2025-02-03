def DFS(node):
    for i in graph[node]:
        if i not in infection:
            infection.add(i)
            DFS(i)
            

graph = {}
infection = set([1])

N = int(input())

for i in range(1, N+1):
    graph[i] = []

C = int(input())

for _ in range(C):
    f, b = map(int, input().split())

    graph[f].append(b)
    graph[b].append(f)

DFS(1)        

print(len(infection)-1)

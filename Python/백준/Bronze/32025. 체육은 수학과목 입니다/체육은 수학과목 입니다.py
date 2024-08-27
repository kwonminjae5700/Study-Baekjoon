def sol(h, w):
    return min(h, w) * 100 // 2
 
 
if __name__ == '__main__':
    h = int(input())
    w = int(input())
 
    print(sol(h, w))
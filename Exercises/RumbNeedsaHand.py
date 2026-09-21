def permutation(n, p):
    aux = [i+1 for i in range(len(p))]
    num = p.index(n)
    for element in p:
        p2 = p[:]
        e = p2.index(element)
        p2[num], p2[e] = p2[e], p2[num]
        if p2 == aux: return "YES"
    return "NO"
        
def main():
    t = int(input())  # número de casos
    for _ in range(t):
        n = int(input())
        p = list(map(int, input().split()))
        print(permutation(n, p))

if __name__ == "__main__":
    main()
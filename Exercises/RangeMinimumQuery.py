from cmath import sqrt

def singleQuery(l, i, j):
    min = l[i]
    if i >= j:
        return min
    for x in range(i+1, j):
        if l[x] < min:
            min = l[x]
    if l[j] < min:
        min = l[j]
    return min

def generalQuery(l, listQueries):
    for query in listQueries:
        result = singleQuery(l, query[0], query[1])
        print(result)

def preProcessing(l):
    blocks = sqrt(l)
    for i in range(l):
        

def main():
    t = int(input())

    for _ in range(t):

        n = int(input())
        l = list(map(int, input().split()))

        q = int(input())

        listQueries = []

        for _ in range(q):
            i, j = map(int, input().split())
            listQueries.append((i, j))

        generalQuery(l, listQueries)

if __name__ == "__main__":
    main()
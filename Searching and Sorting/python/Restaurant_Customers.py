def max_restaurant_customers():
    n = int(input())
    arrival, departure = [],[]
    for i in range(n):
        a,d = map(int,list(input().split(" ")))
        arrival.append(a)
        departure.append(d)
    arrival.sort()
    departure.sort()

    i,j,max_customers, curr_customers = 0,0,0,0

    while i < n and j < n:
        if arrival[i] < departure[j]:
            curr_customers += 1
            max_customers = max(max_customers, curr_customers)
            i += 1
        else:
            curr_customers -= 1
            j += 1
    
    print(max_customers, sep = '\n')
    return None

if __name__ == '__main__':
    max_restaurant_customers()
def max_restaurant_customers():
    n = int(input())
    times_list = []
    for i in range(n):
        arrival, departure = map(int,list(input().split(" ")))
        times_list.append([arrival,departure])
    times_list = sorted(times_list)
    # print(times_list)
    currmax, maxofall = 1,1
    curr_person = times_list[0]
    for i in range(1,n):
        if curr_person[1] >= times_list[i][0]:
            currmax += 1
        else:
            currmax = 0
        curr_person = times_list[i]
        maxofall = max(currmax,maxofall)
    print(maxofall,end='\n')
    return None

if __name__ == '__main__':
    max_restaurant_customers()
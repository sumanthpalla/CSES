def sum_of_four_values():
    n,sum = map(int,list(input().split(" ")))
    arr = []
    input_list = [int(x) for x in input().split(" ")]
    for i in range(n):
        arr.append([input_list[i],i+1])
    arr.sort()
    for i in range(n-3):
        for j in range(i+1,n-2):
            left = j + 1
            right = n - 1
            while left < right:
                temp_sum = arr[i][0] + arr[j][0] + arr[left][0] + arr[right][0]
                if temp_sum == sum:
                    print(arr[i][1],arr[j][1], arr[left][1], arr[right][1],sep = " ")
                    return None
                elif temp_sum > sum:
                    right -= 1
                else:
                    left += 1
    print("IMPOSSIBLE\n")
    return None

if __name__ == '__main__':
    sum_of_four_values()
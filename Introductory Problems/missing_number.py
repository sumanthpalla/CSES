from typing import List
def missing_number(arr: List,n:int) -> int:
    arr_sum = sum(arr, 0)
    original_sum = (n*(n+1))//2
    return original_sum - arr_sum

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int,input().split()))
    print(missing_number(arr,n))

from typing import List
def increasing_array(arr:List, n:int)->int:
    """
    Increasing Array:

    Make sure that each element is atleast large as previous element
    """

    moves_required = 0

    for index in range(1,n):
        # make arr[index] to be min(p)
        if arr[index] < arr[index-1]:
            moves_required += arr[index-1]-arr[index]
            arr[index] = arr[index-1]
    
    # print(arr)
    return moves_required


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int,input().split()))
    print(increasing_array(arr,n))

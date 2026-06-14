
# this file implements a binary search algorithm


from typing import List 

def linear_search(arr: List[int], target:int)->int:
    """
    Performs linear search over the array with a given target.

    Arguments:

    arr: List of integers
    target: an integer to lookup in the array


    return

    index: an integer representing the index of the target variable, if found else -1 
    """
    # this iterates from 0 to len(arr)-1
    for index in range(len(arr)):
        if arr[index] == target:
            # index found, return the index
            return index
    # didn't find the index return -1
    return -1

def binary_search(arr: List[int], target: int)->int:
    """
    Performs binary search over the array and returns the target

    Args:

    arr: List of integers to be searched for target

    target: the lookupvalue

    Returns:
    index: an integer which returns the index of the target variable
    """
    left = 0
    right = len(arr)-1
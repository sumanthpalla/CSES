def permutations(n:int):
    """
    Given n, we need to construct a permutation where
    no adjacent elements whose difference is 1
    """
    if n in [1,2,3]:
        print("NO SOLUTION")
        return
    
    
def permutations(n:int):
    """
    Given n, we need to construct a permutation where
    no adjacent elements whose difference is 1
    """
    if n in [2,3]:
        print("NO SOLUTION")
        return
    
    else:
        odd_string = ""
        even_string = ""
        for i in range(1,n+1):
            if i%2:
                odd_string += str(i) + " "
            else:
                even_string += str(i) +" "
        result_string = even_string + odd_string

        print(result_string)


if __name__ == '__main__':
    n = int(input())
    permutations(n)
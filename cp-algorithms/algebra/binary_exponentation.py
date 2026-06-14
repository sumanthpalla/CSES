# iterative solution

# def compute_binary_exponentation_iterative(base: int, exponent: int)->int:

#   res = 1
#   while exponent > 0:
#     if exponent & 1:
#       res *= base
#     # keep squaring the base and decreasing the exponent by half
#     base *= base
#     exponent = exponent >> 1 
#   return res


def compute_binary_exponentation_iterative(base: int, exponent: int) -> int:
   # result will be base ^ {exponent}
   # we can reduce the number of computations by diving the exponent by half each time and squaring the base
   result = 1
   while exponent > 0:
    if exponent & 1:
         result *= base
    base *= base
    exponent >>= 1
   return result

def compute_bin_pow_mod_m(base: int, exponent: int, mod: int):
   result = 1

   while exponent > 0:
      if exponent & 1:
        result = ((result % mod) * (base % mod))%mod
      base = (base * base) % mod
      exponent >>= 1
   return result
        

if __name__ == '__main__':
    print(compute_binary_exponentation_iterative(2,8))
    print(compute_bin_pow_mod_m(3,13,7))
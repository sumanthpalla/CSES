def weird_algorithm(n):
  ans = str(n) + " "
  while n>1:
    if n%2:
      n = 3*n + 1
    else:
      n //= 2
    ans += str(n) + " "
  print(ans)
  return 

if __name__ == "__main__":
  n = int(input())
  weird_algorithm(n)
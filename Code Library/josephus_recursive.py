def josephus(n, k): 
  
      if n == 1: 
          return 1
      else: 
  
          return (josephus(n - 1, k) + k-1) % n + 1
  
  
n = 3
k = 1
  
print(josephus(n, k)) 

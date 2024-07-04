# Script: fibonacci.py
# Calculates the nth Fibonacci number
# Hint: This implementation is inefficient for large values of n

def fibonacci(n):
    b=1
      #To find zeroth term
    if n <= 0:    
        return 0
      #for n>1
    elif n>1:      
      a=0
      for i in range(2,n+1):
         c=a+b
         a=b  
         b=c
    #if n==1 returns 1
    return b
#Used Dynamic programming to optimise the code
# Call the function
print(fibonacci(35)) 
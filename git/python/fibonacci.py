# Script: fibonacci.py
# Calculates the nth Fibonacci number
# Hint: This implementation is inefficient for large values of n

def fibonacci(n):
    a=0
    b=1
      #To find zeroth term
    if n <= 0:    
        return 0
      #To find first term
    elif n == 1:      
        return 1
      #For n>1
    else:            
       for i in range(2,n+1):
         c=a+b
         a=b  
         b=c
  return b 
# Call the function
print(fibonacci(35))  

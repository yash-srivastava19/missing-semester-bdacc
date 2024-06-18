# Script: fibonacci.py
# Calculates the nth Fibonacci number
# Hint: This implementation is inefficient for large values of n

def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
        a,b=0,1
    for i in range(2,n+1):
        a,b=b,a+b\
    return b

# Call the function
print(fibonacci(35))  # Hint: This may take a long time or cause a RecursionError

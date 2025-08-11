# Script: fibonacci.py
# Calculates the nth Fibonacci number
# Hint: This implementation is inefficient for large values of n

def fibonacci(n):
    a=0
    b=1
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        for i in range(2, n+1):
            c = a + b
            a = b
            b = c
        return b
#Used Dynamic programming to optimise the code
# Call the function
print(fibonacci(35))  # Hint: This may take a long time or cause a RecursionError

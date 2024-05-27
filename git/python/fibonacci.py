# Script: fibonacci.py
# Calculates the nth Fibonacci number
# Hint: This implementation is inefficient for large values of n

def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# Call the function
print(fibonacci(35))  # Hint: This may take a long time or cause a RecursionError

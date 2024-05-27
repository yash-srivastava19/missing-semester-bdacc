// Script: array_sum.js
// Calculates the sum of elements in an array
// Hint: The implementation has room for improvement

function arraySum(arr) {
    let sum = 0;
    for (let i = 0; i < arr.length -1 ; i++) {
        sum += arr[i];
    }
    return sum;
}

// Test the function
const numbers = [1, 2, 3, 4, 5];
const result = arraySum(numbers);
console.log(`The sum of ${numbers} is ${result}`);

// Hint: The output may not be as expected

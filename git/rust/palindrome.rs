// Script: palindrome.rs
// Checks if a given string is a palindrome
// Hint: The logic needs improvement

fn is_palindrome(s: &str) -> bool {
    let mut reversed = String::new();
    for c in s.chars().rev() {
        reversed.push(c);
    }
    s == reversed  // Hint: This is not an efficient way to check for palindromes
}

fn main() {
    let input = "racecar";
    println!("{} is a palindrome: {}", input, is_palindrome(input));
}

// Time limit: 1.00 s
// Memory limit: 512 MB



// You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Constraints

// 2 <= n <= 2 * 10^5

// Example
// Input:
// 5
// 2 3 1 5

// Output:
// 4

#include <iostream>

int main(void)
{
    long long n;
    std::cin >> n;

    long long total = n * (n + 1) / 2;
    long long sum = 0, x;

    for(int i = 0; i < n - 1; i++)
    {
        std::cin >> x;
        sum += x;
    }

    std::cout << total - sum << "\n";
    return 0;
}
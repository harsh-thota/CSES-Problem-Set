// Time limit: 1.00 s
// Memory limit: 512 MB



// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input
// The only input line contains a string of n characters.
// Output
// Print one integer: the length of the longest repetition.
// Constraints

// 1 <= n < = 10^6

// Example
// Input:
// ATTCGGGA

// Output:
// 3

#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    std::cin >> str;
    int maxCount = 1;
    int count = 1;

    for(size_t i = 1; i < str.length(); i++)
    {
        if(str[i] == str[i - 1])
            count++;
        else
            count = 1;
        if(count > maxCount)
            maxCount = count;
    }

    std::cout << maxCount << "\n";
    return 0;
}
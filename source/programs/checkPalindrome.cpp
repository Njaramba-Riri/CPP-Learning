#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


std::string preprocess(const std::string& input)
{
    std::string cleaned;
    for (char ch: input)
    {
        if(std::isalnum(static_cast<unsigned char>(ch)))
        {
            cleaned += static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
        }
    }

    return cleaned;
}


// Checks if the string is palindrome. 
bool isPalindrome(const std::string& input)
{
    std::string processed = preprocess(input);
    size_t processed_len = processed.length();
    for (size_t i = 0; i < processed_len / 2; ++i)
    {
        if(processed[i] != processed[processed_len - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string input;
    std::cout << "Enter a word or a sentence: " << std::endl;
    std::getline(std::cin, input);

    std::cout << "\nChecking if the input is a palindrome...\n";
    std::cout << "Input: " << input << std::endl;

    if(isPalindrome(input))
    {
        std::cout << "\nThe input is a palindrome!\n\n";
    }else
    {
        std::cout << "\nThe input is NOT a palindrome!\n\n";
    }

    return 0;
}

#include <palindrome.h>
#include <reverse.h>
#include <string.h>

int palindrome(str)
char *str;

{
    char reversedString [100];
    reverse(str, reversedString); /* Reverse original. */
    return (strcmp(str, reversedString) == 0); /* Reverse the two. */
}

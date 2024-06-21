#include <stdio.h>
#include <string.h>

reverse();

main()
{
    char str[100]; /*Buffer to hold revrse string */

    reverse("cat", str); /*Reverse the string */
    printf("reverse (\"cat\") = %s\n", str); /*Display result*/
    reverse ("noon", str); /* Reverse the string "noon" */
    printf ("reverse (\"noon\") = %s\n", str); /* Display Result */
}

reverse(before, after)

char *before; /*A pointer to the original string.*/
char *after; /*A pointer to the reversed string. */

{
    int i;
    int j;
    int len;

    len = strlen(before);

    for (j = len - 1, i = 0; j >= 0; j--, i++) /*Reverse loop*/
        after[i] = before[j];
    
    after[len] = NULL; // NULL terminate reversed string.
}

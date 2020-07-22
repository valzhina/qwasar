#include <stdio.h>
#include <string.h>

char* my_strchr(char* param_1, char param_2)
{
    while (*param_1 != '\0') {
        if (*param_1 == param_2)
            return (param_1);  // it returns address //  return (param_1 - 3) will print a few letters before 
        param_1++;
    }
    return (NULL);
}
    /*
    int i = 0;
    while (param_1[i] != '\0') {
        if (param_1[i] == param_2)
            return (&param_1[i]);
        i++;
    }
    return (NULL);
    */

/*
int main() {
    char* haystack = strdup("Ne estep zhatersen?");
    char needle = 'x';

    printf("from the needle till the end: %s\n", my_strchr(haystack, needle));
    return (0);
}
*/

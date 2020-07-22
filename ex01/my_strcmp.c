#include <stdio.h>
#include <string.h>


int my_strcmp(char* param_1, char* param_2)
{
    while (*param_1 != '\0' && *param_2 != '\0') {
        if (*param_1 == *param_2) {
            param_1++;
            param_2++;
        }
        else
          break;
    }
    return (*param_1 - *param_2); 
}

   /* while (*param_1 != '\0' && *param_2 != '\0') {
        if (*param_1 != *param_2)
            break;
        param_1++;
        param_2++;
    }
    return (*param_1 - *param_2); 
} */
/*
int main() {

    char* str1 = strdup("AbC");
    char* str2 = strdup("abc");
    int my_result = my_strcmp(str1, str2);
    int result = strcmp(str1, str2);

    if (my_result == 0 && result == 0) {
        printf("Per my result: Strings are equal %d\n", my_result);
        printf("Per strcmp result: Strings are equal %d\n", result);
    }
    else {
        printf("Per my result: Strings are unequal %d\n", my_result);
        printf("Per strcmp result: Strings are unequal %d\n", result);
    }
    return (0);
} */
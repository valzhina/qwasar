#include <stdio.h>
#include <string.h>

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    int i = 0;

    while (i < param_3) {
        param_1[i] = param_2[i];
        i++;
    }
    param_1[i] = '\0';
return (param_1);
}
/*
int main() {
    char dest [30] = {0};
    char* str = "'Kettek bere tasta!  ";
    int nb = 7;

    printf("Result of cc -> %s\n", my_strncpy(dest, str, nb));
    return (0);
}
*/

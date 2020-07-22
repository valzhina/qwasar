#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2) {

    char* param_3 = param_1;
    int i = 0;
    int j = 0;

    while (param_1[i] != '\0') {
        if (param_1[i] == param_2[j])
            return (&param_1[i]);
        i++;
    }

    return (param_3);
}


int main() {
    char* haystack = strdup("Zhymis zasadem");
    char* needle = 'za';

    printf("from the needle till the end: %s\n", my_strstr(haystack, needle));
    return (0);
}

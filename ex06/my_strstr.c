#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2) {

    int i = 0;
    //int j = 0;
    int k;
    char* param_temp;

    if (*param_2 == '\0')
        return (param_1);

    while (param_1[i] != '\0') {
        if (param_1[i] == *param_2) {
            k = 1;
            while ((param_1[i + k] == param_2[k]) && param_2[k] != '\0') 
                k++;
            if (param_2[k] == '\0') 
                return (&param_1[i]);
        }
        i++;

    }
    return (NULL);
}

/*
int main() {
    char* haystack = strdup("zhymis zhasa'dem");
    char* needle = "zha";

    printf("from the needle till the end: %s\n", my_strstr(haystack, needle));
    return (0);
}
*/
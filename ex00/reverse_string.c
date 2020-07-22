#include <stdio.h>
#include <string.h>

char* reverse_string(char* param_1)
{
    int i = 0;

    while (param_1[i] != '\0')
        i++;

    int left = 0;
    int right = i - 1;
    char temp;

    while (left < right) {

        temp = param_1[left];
        param_1[left] = param_1[right];
        param_1[right] = temp;
        left++;
        right--;
    }
    return (param_1);
}
/*
int	main() {
	char* a = strdup("Hello");

    printf("Before reverse -> %s\n", a);
    printf("Reverse -> %s\n", reverse_string(a));
    return (0);
}
*/

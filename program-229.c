//string counting in c program....

#include <stdio.h>

int string_count(char string_arr[]) {
    int i, length = 0;

    for(i = 0; string_arr[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main() {
    char string_arr[100];
    int length;

    while(NULL != gets(string_arr)){
        length = string_count(string_arr);
        printf("Length: %d \n", length);
    }

return 0;
}


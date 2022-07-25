//find out max even element in an array use function in c program....
#include <stdio.h>
int max_even_element(int arr[10]); //it's function prototype...

int main(){
    int arr[10] = {34, 45, 67, 78, 99, 65, 43, 78, 101, 98};
    int result = max_even_element(arr);
    printf("Max even value is: %d", result);
return 0;
}


int max_even_element(int arr[10]){
    int max_valu = arr[0];
    for(int i = 0; i < 10; i++){
        int element = arr[i];
        if(element % 2 == 0){
            if(element > max_valu){
                max_valu = element;
            }
        }
    }
    return max_valu;
}



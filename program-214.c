//array all odd element summation use function in c program....
#include <stdio.h>

int sum_odd_element(int arr[10]); //it's function prototype...

int main(){
    int arr[10] = {34, 45, 67, 78, 99, 65, 43, 78, 101, 98};
    int result = sum_odd_element(arr);
    printf("All odd value summation is: %d", result);

return 0;
}

int sum_odd_element(int arr[10]){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        int element = arr[i];
        if(element % 2 != 0){
            sum += element;
        }
    }
    return sum;
}





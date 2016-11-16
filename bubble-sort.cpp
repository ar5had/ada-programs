
#include <iostream>
#define N 5
int arr[5] = {5,4,3,2,1};


void display(int* arr) {
    for(int i = 0; i < N; i++) {
        std::cout<< arr[i] << " ";    
    }
}

int main()
{   int pos, no;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < (N - i -1); j++) {
            if(arr[j] > arr [j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }    
        }
    }
    
    display(arr);
}


#include <iostream>
#define N 5
int arr[5] = {5,4,3,2,1};


void display(int* arr) {
    for(int i = 0; i < N; i++) {
        std::cout<< arr[i] << " ";    
    }
}

int main()
{   int indexMin;
    for(int i = 0; i < N; i++) {
        indexMin = i;
        
        for(int j = i + 1; j < N; j++) {
            if (arr[indexMin] > arr[j]) {
                indexMin = j;    
            }
        }
        
        if(indexMin != i) {
            int temp = arr[i];
            arr[i] = arr[indexMin];
            arr[indexMin] = temp;
        }
    }
    
    display(arr);
}

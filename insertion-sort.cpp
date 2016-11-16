
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
        pos = i-1;
        no = arr[i];
        
        while(pos >= 0 && arr[pos] > no) {
            arr[pos + 1] = arr[pos];
            pos--;
        }
        
        arr[pos + 1] = no;
    }
    
    display(arr);
}

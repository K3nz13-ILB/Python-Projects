#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += arr[i];    
        
    }
    return total;
}

int main() {
    int arr[5] = {3, 7, 2, 8, 5};
    cout << sum(arr, 5);
    return 0;
}
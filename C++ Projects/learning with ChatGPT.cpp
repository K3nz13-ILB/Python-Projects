
#include <iostream> 
#include <vector> 
using namespace std; 

int main(){

    int amount;
    cin >> amount;
    vector<int> num(amount);

    for (int i = 0; i < amount; i++){
        cin >> num.at(i);
    }//input the numbers into the vector

    int total = 0;
    int average;
    for (int i = 0; i < amount; i++){
        total += num.at(i);
    }
    average = total/amount;//count average

    int aboveAverage = 0;
    for (int i = 0; i < amount; i++){
        if (num.at(i) > average) {
            aboveAverage++;
        }
    }

    cout << aboveAverage;
    
    
    return 0;
}
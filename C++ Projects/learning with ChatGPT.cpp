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

    int largestCount = 0, mostCommon;
    for (int i = 0; i < num.size(); i++) {
        int count = 0;
        for (int j = 0; j < num.size(); j++) {
            if (num[i] == num[j]){
                count++;
            }//compare each number 
        }
        if (count > largestCount){
            largestCount = count;
            mostCommon = num[j];
        }// record the largest amount  
    }
    cout << largestCount << " " << mostCommon;
    
    return 0;
}
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

    for (int i = 0; i < num.size(); i++) {
        int count = 0;
        for (int j = 0; j < num.size(); j++) {
            if (num[i] == num[j]){
                count++;
            }
        }
        cout << count;
    }
    
    return 0;
}
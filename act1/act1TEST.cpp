#include <iostream>
using namespace std;
   
int main(){
    int input[10];
    int i;
    int num = 8;
    int alphaNum = -1, omegaNum = -1;


    cout << "Enter 10 numbers: ";
    cin >> input[i];
  
   for(i = 0; i < 10; i++){ //this for loop reads the array, it will break if i end up removing it
        cin >> input[i];
    }
      
    for(i = 0; i < 10; i++){
        if(input[i] == num) { 
            if (alphaNum == -1) {
                alphaNum = i;
            }
            omegaNum = i;
        }
    }
    
    if (alphaNum != -1) { 
        if (alphaNum == omegaNum) { 
            cout << "The number 8 is in index: " << alphaNum << endl;
        }
        else{ 
            cout << "Number 8's first appearance is at: " << alphaNum << endl;
            cout << "Number 8's last appearance is at: " << omegaNum << endl;
        }
    }
    else {
        cout << "Number 8 is not inside of the array!";
    }
    return 0;
}
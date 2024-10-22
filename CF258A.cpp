#include <iostream>
 //Elephant and Bits - in order to make a binary number greater with only one deletion - delete the greatest 0, that is the first 0 that shows up from the beginning of the number (0th index)
using namespace std;
 
int main() {
    string n;
    cin >> n;
    bool isFirst = true;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0' && isFirst) {
            isFirst = false;
        }
        else if (isFirst == true && i == n.length()-1)
            break;
        else
            cout << n[i];
    }
    
}

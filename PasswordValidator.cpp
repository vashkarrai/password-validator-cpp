#include <iostream>

using namespace std;

int main() {

    string password;    // string to store the password
    
    while (true) {
        
        cout << "Enter password: ";  
        cin >> password;
        
        int length;
        
        if (password.length() < 8 || password.length() > 20) {
            cout << "\nError: Password must be 8 to 20 characters long.\nPlease Try again!" << endl << endl;
            continue;
        }
    
    }
    return 0;
}
#include <iostream>

using namespace std;

int main() {

    string password;        // string to store the password
    int upperCharCounter = 0;       // store the int value
    int lowerCharCounter = 0;       // store the int value
    
    while (true) {
        
        cout << "Enter password: ";     // prompt user to enter password
        cin >> password;        // store the password user entered in string password
        
        if (password.length() < 8 || password.length() > 20) {
            cout << "\nError: Password must be 8 to 20 characters long.\nPlease try again!" << endl << endl;
            continue;
        }     

        // goes through the string password until the end
        for (int i = 0; i<password.length(); i++){
            
            // if any upper case letter found, upperCharCounter increment by 1
            if (isupper(password[i])) {
                upperCharCounter ++;
            }

            // if any lower case letter found, lowerCharCounter increment by 1
            else if (islower(password[i])) {
                lowerCharCounter ++;
            }
        }

        //cout << "Upper: " << upperCharCounter << endl << "Lower: " << lowerCharCounter << endl << endl;           // for the test purpose
        
        if (upperCharCounter == 0) {        // check if upperCharCounter is equal to 0, if so, execute statement below
            cout << "\nError: Password must contain at least 1 upper case letter.\nPlease try again!" << endl << endl;
            lowerCharCounter = 0;       // reset lowerCharCounter to 0
        }
        else if (lowerCharCounter == 0) {           // check if lowerCharCounter is equal to 0, if so, execute statement below
            cout << "\nError: Password must contain at least 1 lower case letter.\nPlease try again!" << endl << endl;
            upperCharCounter = 0;           // reset upperCharCounter to 0
        }
        else {
            break;
        }
    }
    return 0;
}
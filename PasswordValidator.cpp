#include <iostream>
#include <string>

using namespace std;

int main() {

    string password;        // string to store the password
    bool hasSpace = false;       // store bool value
    int upperCharCounter = 0;       // store the int value
    int lowerCharCounter = 0;       // store the int value
    int digitCharCounter = 0;       // store the int value 
    int specialCharCounter = 0;     //store the int value
    
    while (true) {
        
        cout << "Enter password: ";     // prompt user to enter password
        getline(cin, password);        // store the password user entered in string password
        
        // goes through the string password until the end
        for (int i = 0; i < password.length(); i++) {
            
            if (isspace(password[i])) {
                hasSpace = true;
            }
            else if (isupper(password[i])) {         // if any upper case letter found, upperCharCounter increment by 1
                upperCharCounter ++;
            }
            else if (islower(password[i])) {            // if any lower case letter found, lowerCharCounter increment by 1
                lowerCharCounter ++;
            }         
            else if (isdigit(password[i])) {            // if any digit is found, digitCharCounter increment by 1
                digitCharCounter++;
            }
            else {          // char should be special char, hence, specialCharCounter increment by 1
                specialCharCounter++;
            }

        }

        // display for the test purpose
        //cout << "Bool: " << hasSpace << endl; 
        //cout << "Upper: " << upperCharCounter << endl;
        //cout << "Lower: " << lowerCharCounter << endl;
        //cout << "Lower: " << digitCharCounter << endl;          
        //cout << "Special:" << specialCharCounter << endl;

        if  (password.length() < 8 || password.length() > 20) {
            cout << "\nError: Password must be 8 to 20 characters long.\nPlease try again!" << endl << endl; 
            hasSpace = false;               // reset hasSpace     
            upperCharCounter = 0;           // reset upperCharCounter
            lowerCharCounter = 0;           // reset lowerCharCounter 
            digitCharCounter = 0;           // reset digitCharCounter   
            specialCharCounter = 0;         // reset specialCharCounter   
        } 
        else if (hasSpace != false) {        // check if bool is true, if so, execute statement below
            cout << "\nError: Password must not contain space.\nPlease try again!" << endl << endl;
            hasSpace = false; 
            upperCharCounter = 0;           // reset upperCharCounter
            lowerCharCounter = 0;           // reset lowerCharCounter 
            digitCharCounter = 0;           // reset digitCharCounter 
            specialCharCounter = 0;         // reset specialCharCounter  
        }
        else if (upperCharCounter == 0) {        // check if upperCharCounter is equal to 0, if so, execute statement below
            cout << "\nError: Password must contain at least 1 upper case letter.\nPlease try again!" << endl << endl;
            hasSpace = false;               // reset hasSpace 
            lowerCharCounter = 0;           // reset lowerCharCounter
            digitCharCounter = 0;           // reset digitCharCounter 
            specialCharCounter = 0;         // reset specialCharCounter  
        }
        else if (lowerCharCounter == 0) {           // check if lowerCharCounter is equal to 0, if so, execute statement below
            cout << "\nError: Password must contain at least 1 lower case letter.\nPlease try again!" << endl << endl;
            hasSpace = false;               // reset hasSpace 
            upperCharCounter = 0;           // reset upperCharCounter
            digitCharCounter = 0;           // reset digitCharCounter 
            specialCharCounter = 0;         // reset specialCharCounter  
        }
        else if (digitCharCounter == 0) {           // check if digitCharCounter is equal to 0, if so, execute statement below
            cout << "\nError: Password must contain at least 1 number.\nPlease try again!" << endl << endl;
            hasSpace = false;               // reset hasSpace 
            upperCharCounter = 0;           // reset upperCharCounter 
            lowerCharCounter = 0;           // reset lowerCharCounter 
            specialCharCounter = 0;         // reset specialCharCounter  
        }
        else if (specialCharCounter == 0) {           // check if digitCharCounter is equal to 0, if so, execute statement below
            cout << "\nError: Password must contain at least 1 special character.\nPlease try again!" << endl << endl;
            hasSpace = false;               // reset hasSpace 
            upperCharCounter = 0;           // reset upperCharCounter 
            lowerCharCounter = 0;           // reset lowerCharCounter 
            digitCharCounter = 0;           // reset digitCharCounter 
        }
        else if (password.length() < 10) {
            cout << "\nYou have entered a STRONG PASSWORD!" << endl << endl;
            break;
        }
        else {
            cout << "\nYou have entered a SUPER STRONG PASSWORD!" << endl << endl;
            break;
        }
    }
    return 0;
}
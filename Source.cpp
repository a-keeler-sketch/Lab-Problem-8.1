/*
* File: Lab 8
* Author: Anna Keeler
* Date: 10/23/2025
*
* Description: 8.1 Commit project
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

//prototypes
int countVowel(string str);

//global variables


int main(void) {
    string input;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        
        cout << "Vowel Count: " << countVowel(input) << endl;
    }
    
                return 0;
            }

int countVowel(string str) {
    str.length();
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        
        if (str[i]=='a'||str[i] =='e' || str[i] =='i' || str[i]=='o' || str[i]=='u'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        
    }

    
    return count; 
}
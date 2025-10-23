/*
* File: Lab 8
* Author: Anna Keeler
* Date: 10/23/2025
*
* Description: 8.1 Commit project
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototypes
int countVowel(string str);

//global variables


int main(void) {
   
    
    string input = "aeiouh";
   
   
    cout << countVowel(input);
                    

                return 0;
            }

int countVowel(string str) {
    str.length();
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        
        if (str[i]=='a'||str[i] =='e' || str[i] =='i' || str[i]=='o' || str[i]=='u') {
            count++;
        }
        
    }

    
    return count; 
}
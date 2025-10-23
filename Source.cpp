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
int countCharacter(string str);

//global variables


int main(void) {
   
    string input = "hi";
    cout << countCharacter(input);
                    

                return 0;
            }

int countCharacter(string str) {
   
    return str.length(); 
}
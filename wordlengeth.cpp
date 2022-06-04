#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::cout;
using std::cin;


int main() 
{
    string firstWord;
    string secondWord;
    bool keepgoing = true;


    while(keepgoing)
    {
        //Get First Player Word
        cout << "Please enter a word ";
        cin >> firstWord;
        cout << "You entered " << firstWord << ". " << "\n";

        //Get Second Player Word
        cout << "Please enter a word ";
        cin >> secondWord;
        cout << "You entered " << secondWord << ". " << "\n";
        
        //Get word lengths
        int lengthOne = firstWord.length();
        int lengthTwo = secondWord.length();

        if (lengthOne < lengthTwo)
        {
            cout << "Your first word, " << firstWord << ", is shorter than your second word " << secondWord << ". " << '\n';
        }
        if (lengthOne == lengthTwo)
        {
            cout << "Your first word, " << firstWord << ", is the same length as your second word, " << secondWord << '\n';
        }
        if (lengthOne > lengthTwo)
        {
            cout << "Your first word, " << firstWord << ", is longer than your second word " << secondWord << ". " << '\n';
        }

        string userInput; 

        cout << "Would you like to compare two more words? (yes/no)" << "\n";
        cin >> userInput;
        if(userInput == "yes")
        {
            keepgoing = true;
        }
        if (userInput == "no")
        {
            keepgoing = false;
        }        
    }
}

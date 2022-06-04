#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::cout;
using std::cin;

string getWord(string word)
{
    cout << "Please enter a word ";
    cin >> word;
    cout << "You entered " << word << ". " << "\n";
    return word;
}


int main() 
{
    string firstWord;
    string secondWord;
    bool keepgoing = true;


    while(keepgoing)
    {
        //Get First Player Word
        string firstWord = getWord(firstWord);

        //Get Second Player Word
        string secondWord = getWord(secondWord);
        
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

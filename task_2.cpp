#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // create an ifstream object named inFile.
    ifstream inFile;
    // Try to open a non-existing file like "missing.txt". Print an error message if it fails.
    // inFile.open("missing.txt");

    // if (!inFile)
    // {
    //     cout << "Error opening a non existent file!" << endl;
    //     return 1;
    // }
    // change the code to open the correct "devices.txt" file.
    inFile.open("devices.txt");
    if (!inFile)
    {
        cout << "Error opening a non existent file!" << endl;
        return 1;
    }
    // Create a string variable word. Read one word from the file using >> and print it.
    string word;
    // the following commented code reads one word from the file which is the first word
    // if (inFile >> word)
    // {
    //     cout << "The First word is: " << word << endl;
    // }
    // else
    // {
    //     cout << "The file is empty or could not be read." << endl;
    // }
    //the following code reads the file word by word until the end of file
    // while (inFile >> word)
    // {
    //     cout << word << endl;
    // }
    // the following code read the file line by line until the end of file
    while (getline(inFile, word)) {
        cout << word << endl;
    }
    // closing the input file object properly before ending the program
    inFile.close();
}
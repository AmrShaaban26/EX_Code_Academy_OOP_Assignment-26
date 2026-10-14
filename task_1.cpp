#include <iostream>
// Include the correct standard library for file handling in C++
#include <fstream>

using namespace std;

int main()
{
    //create an ofstream object named outFile
    // and Use your object to open a file named "devices.txt".
    // ofstream outFile("devices.txt");
    //the previous line is the one used to fulfill the 1st question 
    //in the task
    //the following line is the modification of the previous line
    // to open the file devices.txt using ios::app
    ofstream outFile("devices.txt" , ios::out | ios::app);
    //Write an if statement to check if the file opened successfully
    if (!outFile)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // If the file is open, write the text "Smart Light - Online" into it.
    outFile << "Smart Light - Online\n";
    // Close the file properly at the end of your program.
    outFile.close();
    // after running the program 4 times, only one line is
    // in the file called devices.txt. Apparently the contents of the
    // file are overwritten every time the file is opened.
    // after the modification of ios::app and running the program
    // 5 times, 5 lines are saved to the file devices.txt

    // the end of task 1 // the end of task 1 // the end of task 1 // the end of task 1
}
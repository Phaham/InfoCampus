#include <iostream>
#include "include/admin.h"       // Include the Student class declaration.

using namespace std;

int main()
{
    Student student;        // Create an instance of the Student class.
    int choice;

    // Display the welcome message and options.
    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "                      Student Information System                        " << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "\n\n\t\tWelcome To Home Page" << endl;
    cout << "\n\t\tPress 1 --> Login" << endl;
    cout << "\t\tPress 2 --> Exit" << endl;
    cout << "\nPlease Enter Your Choice : ";

    try
    {
        // Input validation for choice
        while (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(512, '\n');
            cout << "\nPlease enter a number!!" << endl;
            cout << "\nPlease Enter Your Choice : ";
        }

        switch (choice)
        {
        case 1:
            student.adminLogin();     
            break;
        case 2:
            cout << "See you again." << endl;
            break;
        default:
            cout << "\nPlease select from the options given above" << endl;
            main();  
        }
    }
    catch (const std::exception &ex)
    {
        cerr << "Exception caught: " << ex.what() << endl;      
    }
    return 0;
}

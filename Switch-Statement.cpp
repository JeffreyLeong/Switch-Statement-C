// Switch Practice problem

#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your midterm grade and press Return: ";
    cin >> grade;
    switch(grade)
    {
        case 'A':
            cout << "Excellent. ";
            cout << "You need not to take the final.";
        break;

        case 'B':
            cout << "Very good. ";
            grade = 'A';
            cout << "Your midterm grade is now ";
            cout << grade << ". Congrats!" << endl;
        break;

        case 'C':
            cout << "Passing.\n";
            break;

        case 'D':
        case 'F':
            cout << "Not good. ";
            cout << "Go study.\n";
            break;
        default:
            cout << "That is not a possible grade.\n";
    }
    cout << "End of program.\n";
}
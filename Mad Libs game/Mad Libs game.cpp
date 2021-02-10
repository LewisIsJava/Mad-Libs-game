// Mad Libs game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string instructor_name, user_name, food, number_100_120, adjective, color, animal;
    cout << "Welcome to this game of mad libs, when prompted please input what you desire using the keyboard\n";
    cout << "The first or last name of your instructor: ";
    cin >> instructor_name;
    cout << endl << "Please enter your name: ";
    cin >> user_name;
    cout << endl << "Please enter a food:";
    cin >> food;
    cout << endl << "Please enter a number between 100 and 120:";
    cin >> number_100_120;
    cout << endl << "Please enter an adjective:";
    cin >> adjective;
    cout << endl << "Please enter a color:";
    cin >> color;
    cout << endl << "Please enter an animal:";
    cin >> animal;

    cout << "I am sorry that I am unable to turn in my homework at this time. first\n i ate a rotten " << food << ", which made me turn " << color
        << " and extremely ill. I\n came down with a fever of " << number_100_120 << ". next my " << adjective << " pet \n" << animal
        << " must have smelled the remains of " << food << " on my homework,\n because he ate it. I am currently rewriting my homework and hope you will accept it late.\n" << "sincerly,\n"
        << user_name;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

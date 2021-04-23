// Rilee Seebaum and James French
 
#include "Puzzles.h"
#include <iostream>
#include <string>
using namespace std;
 
Puzzles::Puzzles() // Default constructor
{
    
}
Puzzles::Puzzles(int room, bool key) // Parameterized constructor
{
 
}
int Puzzles::get_rooom(int room)
{
    return room; // Return room num
}
bool Puzzles::key(int room)
{
    if (room == 1) // Contains riddle 1
    {
        string ans;
        ans = ""; // Prints riddle
        cout << " Answer the riddle. I am not alive, but I grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. What am I? " << endl;
        while (ans == "")
        {
            cin >> ans;
            if (ans == "fire" || ans == "Fire" || ans == "FIRE") // If user input is "fire"
            { // Case insensitive
                cout << " That is correct. You now have the key to get to the next room. " << endl;
                return true; // Correct
            }
            else // False
            {
                ans = "";
                cout << " That's incorrect. Please try again. " << endl;
            }
        }
 
    }
    else if (room == 2) // Contains riddle 2
    {
        string ans;
        ans = ""; // Prints riddle
        cout << " Answer the riddle. What 4-letter word can be written forward, backward or upside down, and can still be read from left to right? " << endl;
        cout << " Enter your answer in all capital letters. " << endl;
        while (ans == "")
        {
            cin >> ans;
            if (ans == "NOON") // Correct
            { // Case sensitive
                cout << " That is correct. You now have the key to get to the next room. " << endl;
                return true; // Returns true
            }
            else  // False
            {
                ans = "";
                cout << " That's incorrect. Please try again. " << endl;
            }
        }
    }
    else if (room == 3) // Constains riddle 3
    {
        string ans;
        ans = ""; // Prints riddle
        cout << " Answer the riddle. Railroad Crossing, look out for the cars. Can you spell that, without any R's? " << endl;
        while (ans == "")
        {
            cin >> ans;
            if (ans == "that" || ans == "That" || ans == "THAT") // Correct
            { // Case insensitive
                cout << " That is correct. You now have the key to get to the next room. " << endl;
                return true; // Returns true
            }
            else // Incorrect
            {
                ans = "";
                cout << " That's incorrect. Please try again. " << endl;
            }
        }
    }
    else if (room == 4) // Contains riddle 4
    {
        string ans;
        ans = ""; // Prints riddle
        cout << " Answer the riddle. What is at the end of a rainbow? " << endl;
        while (ans == "")
        {
            cin >> ans; // Correct
            if (ans == "w" || ans == "W")
            { // Case insensitive
                cout << " That is correct. You now have the key to get to the next room. " << endl;
                return true; // Returns true
            }
            else // Incorrect
            {
                ans = "";
                cout << " That's incorrect. Please try again. " << endl;
            }
        }
    }
    else if (room == 5) // Contains riddle 5
    {
        string ans;
        ans = ""; // Prints riddle
        cout << " Answer the riddle. How many bricks does it take to complete a brick building? " << endl;
        while (ans == "")
        {
            cin >> ans;
            if (ans == "one" || ans == "One" || ans == "ONE") // Correct
            { // Case insensitive
                cout << " That is correct. You now have the key to get to the next room. " << endl;
                return true; // Returns true
            }
            else // False
            {
                ans = "";
                cout << " That's incorrect. Please try again. " << endl;
            }
        }
    }
    return false; // If true is never returned, return false
}

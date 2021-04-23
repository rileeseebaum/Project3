// Rilee Seebaum and James French
 
#include "Driver.cpp"
#include "Fighting.cpp"
#include "Materials.cpp"
#include "Puzzles.cpp"
#include "Rooms.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
 
int main()
{
    // User inputs names of all the players
    string leader, play2, play3, play4, play5;
    cout << "Please enter the name of the leader" << endl;
    cin >> leader;
    cout << "Please enter the name of Player 2" << endl;
    cin >> play2;
    cout << "Please enter the name of Player 3" << endl;
    cin >> play3;
    cout << "Please enter the name of Player 4" << endl;
    cin >> play4;
    cout << "Please enter the name of Player 5" << endl;
    cin >> play5;
 
    Driver(leader, play2, play3, play4, play5); // Names added to driver class
 
    string line;
    ifstream myFile("merchant_info.txt");
    if (myFile.is_open()) // Prints file from merchant txt file
    {
        while (getline(myFile,line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    Materials Materials; // Accesses materials class
    Materials.initialStore(); // Prints store 
 
    cout << " You are now entering the dungeon. " << endl;
    cout << endl;
 
    int option; // Initializes variables
    int numOfIngredients;
    int ingredients;
    int numberC;
    int numberI;
    int numberP;
    string ans = ""; // Answer set to empty
    do // Prints status update
    {
        cout << " STATUS UPDATE " << endl;
        // if (get_key() == true)
        // {
        //     cout << " You have the key for this room. " << endl;
        // }
        // else
        // {
        //     cout << " You do not have the key for this room. " << endl;
        // }
        cout << " You have the key for this room. " << endl;
        cout << " Fullness levels for each member in the party are: " << endl;
        cout << leader << "'s fullness level is: " << 10 <<  endl;
        cout << play2 << "'s fullness level is: " << 10 << endl;
        cout << play3 << "'s fullness level is: " << 10 << endl;
        cout << play4 << "'s fullness level is: " << 10 << endl;
        cout << play5 << "'s fullness level is: " << 10 << endl;
        cout << endl;
        cout << " Your party has " << 30 << " ingredients in kg remaining. " << endl;
        cout << " Your party has " << 3 << " cookware remaining. " << endl;
        cout << " Your party has " << 2 << " armor remaining. " << endl;
        cout << " Your party has " << 3 << " weapons remaining. " << endl;
        cout << " Your party has " << 100 << " coins remaining. " << endl;
        cout << " Your party has " << 0 << " treasure available. " << endl;
        cout << " The sorcerer's anger level is: " << 0 << "." << endl;
 
        cout << endl;
        cout << endl;
 
        cout << " Here is a list of options you have. " << endl; // Prints options
        cout << " Would you like to: " << endl;
        cout << " 1. Fight a monster" << endl;
        cout << " 2. Speak to NPC" << endl;
        cout << " 3. Cook and Eat" << endl;
        cout << " 4. Explore the Room" << endl;
        cout << " 5. Open the door" << endl; 
        cin >> option;
 
        switch (option)
        {
            case 1: // Fight a monster
                char option2;
                cout << " Animated Armor appeared! " << endl;
                
                cout << " Would you like to: " << endl;
                cout << " 1. Fight" << endl;
                cout << " 2. Surrender" << endl;
 
                switch (option2)
                {
                    case '1': // Fight
                        // implement fighing mechanics
                        cout << " " << endl;
                    break;
                    case '2': // Surrender
                        // implement surrendering mechanics
                        cout << " " << endl;
                    break;
                    default:
                        cout << " Sorry that is not an option. Please try again. " << endl;
                    break;
                }
            break;
            case 2: // Speak to NPC
                cout << " Answer the riddle. " << endl;
                cout << " You must first complete this puzzle. " << endl;
                cout << " My family is known to be crazy; " << endl;
                cout << " I'm good wehen I'm alone adn when spread I am amazing; " << endl;
                cout << " It's a matter of taste; " << endl;
                cout << " I'm good for your health, bad for your waist. " << endl;
                cout << " What am I? " << endl;
                cout << " Hint: Some people are severely allergic to it. The word is also singular. " << endl;
                while (ans == "")
                {
                    cin >> ans;
                    if (ans == "peanut" || ans == "Peanut" || ans == "PEANUT")
                    {
                        cout << " That is correct. Now you can shop. " << endl;
                        Materials.storeRoomNum(1);
                    }
                    else 
                    {
                        ans = "";
                        cout << " That's incorrect. Please try again. " << endl;
                    }
                } 
            break;
            case 3: // Cook and eat
                if (numOfIngredients > 0)
                {
                    cout << " How many ingredients would you like to cook? " << endl;
                    cin >> numOfIngredients;
                    ingredients = ingredients - numOfIngredients;
                    cout << " What would you like to cook with?" << endl;
                    char option2;
                    do
                    {
                        cout << " 1. A cauldron" << endl;
                        cout << " 2. A cast iron pan" << endl;
                        cout << " 3. A ceramic pot" << endl;
                        cout << " 4. Exit. " << endl;
                        cin >> option2;
                        switch(option2)
                        {
                            case '1':
                                if (numberC == 0)
                                {
                                    cout << " You do not have this item. " << endl;
                                }
                                else
                                {
                                    cout << " Your meal was cooked successfully, everyone's fullness level went up by 1. " << endl;
                                }
                            break;
                            case '2':
                                if (numberI == 0)
                                {
                                    cout << " You do not have this item. " << endl;
                                }
                                else
                                {
                                    cout << " Your meal was cooked successfully, everyone's fullness level went up by 1. " << endl;
                                }
                            break;
                            case '3':
                                if (numberP == 0)
                                {
                                    cout << " You do not have this item. " << endl;
                                }
                                else
                                {
                                    cout << " Your meal was cooked successfully, everyone's fullness level went up by 1. " << endl;
                                }
                            break;
                            case '4':
                                cout << endl;
                            break;
                            default:
                                cout << "Invalid option." << endl;
                            break;
                        }
                    } while (option2 != '4');
                }
            break;
            case 4: // Explore the room
                // could not implement this section so print something out so loop does not end
                cout << " You did not find any treasure. " << endl;
            break;
            case 5: // Open the door
                // if (key() == true)
                // {
                //     cout << " You have the key, you go into the next room. " << endl;
                //     // get_roomNum(room+1)
                // }
                // else
                // {
                //     cout << " You do not have the key. " << endl;
                //     cout << " You fell into a trap, and you must solve a puzzle to get out. " << endl;
                // }
                cout << " You can go to the next room. " << endl; // also couldn't get the Puzzle class to work, so print out something so it does not end. 
            break;
            default:
                cout << " That is not an option. Please try again. "  << endl;
            break;
        }
    }while(option != 5);
 
    return 0;
}
 

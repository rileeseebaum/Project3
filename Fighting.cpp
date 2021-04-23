// Rilee Seebaum and James French
 
#include "Fighting.h"
#include <iostream>
#include <string>
using namespace std;
 
Fighting::Fighting() // Default Constructor
{
    name = ""; // Set to empty
    power = 0; // Set to zero
    health = 0; // Set to zero
}
Fighting::Fighting(string name, int attack, int health) // Parameterized Constructor
{

}
string Fighting::get_name() const
{
    return name; // Return name
}
int Fighting::get_attack() const
{
    return power; // Return power type
}
int Fighting::get_health() const
{
    return health; // Return health level
}
// void Fighting::healthLevel()
// {
//     Driver party[][];
//     for (int i = 0; i < 5; i++) // Finds health of each member
//     {
//         health = party[i][1];
//         if (health == 0) // If health is zero
//         {
//             cout << get_name[i] << " died. " << endl; // Member is dead
//         }
//     }
// }
// void Fighting::surrender()
// {
//     Driver level1--;
//     Driver level2--;
//     Driver level3--;
//     Driver level4--;
//     Driver level5--;
//     cout << "You surrendered and everyone's fullness levels went down by 1. " << endl;
// }
// void Fighting::weapons()
// {
//     Driver party[][];
//     int index = 2;
//     int attack = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (party[i][index] == "axes")
//         {
//             party[i][2] = axe;
//             axe = 5;
//         }
//         else if (party[i][index] == "sword")
//         {
//             party[i][2] = 5;
//         }
//         else if (party[i][index] == "crossBow")
//         {
//             party[i][2] = 5;
//         }
//         else if (party[i][index] == "spear")
//         {
//             party[i][2] = 2;
//         }
//         else if (party[i][index] == "club")
//         {
//             party[i][2] = 2;
//         }
//     }
//     return party[][];
// }
 
bool Fighting::battle()
{
    cout << " You beat the monster, and it dropped the key! " << endl;
    return true; // Returns true is battle is won
}

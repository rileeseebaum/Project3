// Rilee Seebaum and James French
 
#include "Driver.h"
#include <iostream>
#include <string>
 
using namespace std;
 
Driver::Driver() // Default constructor
{
   // leader = "John";
   // member = "Brian";
   // member2 = "Jack";
   // member3 = "Jill";
   // member4 = "Sam";
}
Driver::Driver(string lead1, string mem2, string mem3, string mem4, string mem5) // Parameterized constructor
{
   leader = lead1;
   member = mem2;
   member2 = mem3;
   member3 = mem4;
   member4 = mem5;
}
void Driver::setLeaderLevel(int num)
{
   level1 = level1 - num; // Fullness level is subtracted by num
}
void Driver::setMem2Level(int num)
{
   level2 = level2 - num; // Fullness level is subtracted by num
}
void Driver::setMem3Level(int num)
{
   level3 = level3 - num; // Fullness level is subtracted by num
}
void Driver::setMem4Level(int num)
{
   level4 = level4 - num; // Fullness level is subtracted by num
}
void Driver::setMem5Level(int num)
{
   level5 = level5 - num; // Fullness level is subtracted by num
}
int Driver::getLeaderLevel()
{
   return level1; // Return fullness level
}
int Driver::getMem2Level()
{
   return level2; // Return fullness level
}
int Driver::getMem3Level()
{
   return level3; // Return fullness level
}
int Driver::getMem4Level()
{
   return level4; // Return fullness level
}
int Driver::getMem5Level()
{
   return level5; // Return fullness level
}
string Driver::getLeader()
{
   return leader; // Return name
}
string Driver::getMem2()
{
   return member; // Return name
}
string Driver::getMem3()
{
   return member2; // Return name
}
string Driver::getMem4()
{
   return member3; // Return name
}
string Driver::getMem5()
{
   return member4; // Return name
}
 
// void Driver::Party()
// {
//    string party[5][4] = 
//    {
//       {leader, 0, 0, 0},
//       {member, 0, 0, 0},
//       {member2, 0, 0, 0},
//       {member3, 0, 0, 0},
//       {member4, 0, 0, 0}
//    };
//    return party[][];
// }

// Rilee Seebaum and James French
 
#ifndef DRIVER_H
#define DRIVER_H
 
#include <iostream>
#include <string>
using namespace std;
 
class Driver
{
    public:
    // Constructors------------------------------------------------------------------------------------

    Driver(); // Default constructor
    Driver(string lead1, string mem2, string mem3, string mem4, string mem5); // Parameterized constructor
    
    // Mutators----------------------------------------------------------------------------------------
    void setLeaderLevel(int num);
    void setMem2Level(int num);
    void setMem3Level(int num);
    void setMem4Level(int num);
    void setMem5Level(int num);
 
    // Accessors---------------------------------------------------------------------------------------
    
    int getLeaderLevel();
    int getMem2Level();
    int getMem3Level();
    int getMem4Level();
    int getMem5Level();
 
 
 
    string getLeader();
    string getMem2();
    string getMem3();
    string getMem4();
    string getMem5();
    // string Party();
 
    private:
    string leader; // All member names
    string member;
    string member2;
    string member3;
    string member4;
    int level1; // All fullness levels
    int level2;
    int level3;
    int level4;
    int level5;
    static const int size = 5;
    string party[5]; // Array of members in party
};
#endif

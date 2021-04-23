// Rilee Seebaum and James French
#ifndef PUZZLES_H
#define PUZZLES_H
#include <iostream>
#include <string>
using namespace std;
class Puzzles
{
   public:
   // Constructors------------------------------------------------------------------------------------

   Puzzles();
   Puzzles(int index, bool key);

    // Accessors---------------------------------------------------------------------------------------
    
   int get_rooom(int index);
  
  // Mutators----------------------------------------------------------------------------------------

  bool key(int room); // if bool is true then they get the key and can leave the room
   private:
   // bool key;
};
#endif

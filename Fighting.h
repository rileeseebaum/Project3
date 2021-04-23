// Rilee Seebaum and James French
#ifndef FIGHTING_H
#define FIGHTING_H
#include <iostream>
#include <string>
using namespace std;
class Fighting
{
   public:
   // Constructors------------------------------------------------------------------------------------

   Fighting(); // Default Constructor
   Fighting(string name, int attack, int health); // Parameterized Constructor

   // Accessors---------------------------------------------------------------------------------------

   string get_name() const;
   int get_attack() const;
   int get_health() const;

   // Mutators----------------------------------------------------------------------------------------

   void surrender();
   void set_name(string name);
   void healthLevel();
   void weapons();
   bool battle();
   
   private:
   string name;
   int power;
   int health;
};
#endif

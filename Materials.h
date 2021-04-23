// Rilee Seebaum and James French
 
#ifndef MATERIALS_H
#define MATERIALS_H
 
#include <iostream>
#include <string>
using namespace std;
 
class Materials
{
   public:
   // Constructors------------------------------------------------------------------------------------
   Materials(); // Default Constructor
   Materials(float coins, int ingredients, int weapons, int armor, int cookware); // Parameterized Constructor
 
   // Mutators----------------------------------------------------------------------------------------
 
   // float setCoins(float input); // Shows gold coins
   // void setIngredients(int input); // Prints ingredients
   // void setWeapons(int input); // Prints weapons
   // void setArmor(int input); // Prints armor
   // void setCookware(int input); // Prints cookware
   void initialStore();
   bool status();
   void storeRoomNum(int room);
 
   // Accessors---------------------------------------------------------------------------------------
 
   float getCoins();
   int getIngredients(); // adds ingredient and computes new price
   int getWeapons(); // adds weapon and computes new price
   int getArmor(); // adds armor and computes new price
   int getCookware(); // adds cookware and computes new price
 
   private:
   int coins;
   int ingredients;
   int cookware;
   int weapons;
   int armor;
};
 
#endif

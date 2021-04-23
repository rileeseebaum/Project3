// Rilee Seebaum and James French
#include "Materials.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
  Materials::Materials()// Default Constructor
  {
     coins = 100;
     ingredients = 0;
     cookware = 0;
     weapons = 0;
     armor = 0;
  }
  Materials::Materials(float coins, int ingredients, int weapons, int armor, int cookware) // Parameterized constructor
  {
 
  }
  // Mutators----------------------------------------------------------------------------------------
//   void Materials::setCoins(float input)
//   {
//      coins = input;
//   }
//   void Materials::setIngredients(int input) // Prints ingredients
//   {
//      ingredients = input;
//   }
//   void Materials::setWeapons(int input) // Prints weapons
//   {
//      weapons = input;
//   }
//   void Materials::setArmor(int input) // Prints armor
//   {
//      armor = input;
//   }
//   void Materials::setCookware(int input) // Prints cookware
//   {
//      cookware = input;
//   }
  // Accessors---------------------------------------------------------------------------------------
  float Materials::getCoins()
  {
     return coins; // Return coin count
  }
  int Materials::getIngredients() // adds ingredient and computes new price
  {
     return ingredients; // Return ingredient count
  }
  int Materials::getWeapons() // adds weapon and computes new price
  {
     return weapons; // Return weapon count
  }
  int Materials::getArmor() // adds armor and computes new price
  {
     return armor; // Return armor count
  }
  int Materials::getCookware() // adds cookware and computes new price
  {
     return cookware; // Return cookware count
  }
  void Materials::initialStore()
  {
     // Sets everything to zero
      float cost = 0.0;
      int axes = 0;
      int club = 0;
      int spear = 0;
      int crossBow = 0;
      int sword = 0;
      cookware = 0;
      armor = 0;
      ingredients = 0;
      int weaponAmount = 0;
      char option;
      char option2;
      int numberC = 0;
      int numberI = 0;
      int numberP = 0;
      int c = 0;
      int i = 0;
      int p = 0;
      do
      {
         cout << " What would you like to purchase? " << endl; // Menu 1
         cout << " 1. Ingredients" << endl;
         cout << " 2. Weapons" << endl;
         cout << " 3. Armor" << endl;
         cout << " 4. Cookware" << endl;
         cout << " 5. Leave" << endl;
         cout << " Enter the number next to the items you would like to purchase. " << endl;
         cin >> option;
         switch (option)
         {
            case '1': // Ingredients
               cout << " You must purchase at least 1 kg of food to continue. " << endl;
               while (ingredients == 0)
               {
                  cout << "How much do you wish to purchase? (1 kg costs 1 coin) " << endl;
                  cin >> ingredients;
                  if ((ingredients * 1) > 100) // Checks if player has enough coints
                  {
                     ingredients = 0;
                     cout << " You do not have enough money, please purchase less than 100. " << endl;
                  }
               }
               cost += (ingredients*1); // Adds cost
               coins = coins - cost; // Updates coins
               cout << endl;
               cout << " You have " << coins << " coins remaining. " << endl; // Prints remaining coins
               cout << endl;
            break;
            case '2': // Weapons
               cout << " I recommend purchasing one for each member of the party. " << endl; // Prints recommendation
               cout << " You can purchase a maximum of 5 weapons. " << endl;
               while(weaponAmount == 0)
               {
                  cout << " How many clubs do you wish to purchase? (2 gold)" << endl;
                  cin >> club;
                  cout << " How many spears do you wish to purchase? (2 gold)" << endl;
                  cin >> spear;
                  cout << " How many crossbows do you wish to purchase? (5 gold)" << endl;
                  cin >> crossBow;
                  cout << " How many battle-axes do you wish to purchase? (5 gold)" << endl;
                  cin >> axes;
                  cout << " How many longswords do you wish to purchase? (5 gold)" << endl;
                  cin >> sword;
                  weaponAmount = club + spear + crossBow + axes + sword; // Finds total count of weapons purchased
                  if ((weaponAmount) > 5) // Checks if too many weapons are purchased
                  {
                     weaponAmount = 0;
                     cout << " You purchased too many weapons. Please try again and buy 5 or less. " << endl;
                  }
               }
               cout << endl;
    
               cost += (club*2) + (spear*2) + (crossBow*5) + (axes*5) + (sword*5); // Finds total cost
               coins = coins - cost; // Updates amount of coins
               cout << " You have " << coins << " coins remaining. " << endl; // Prints remaining coins
            break;
            case '3': // Armour
              while(armor == 0)
              {
                 cout << " I recommend purchasing 5 sets of armor since you all will be fighting at some point. " << endl;
                 cout << " Purchasing 5 sets increases your chances of survival dramatically, purchasing any more than 5 does you no good. " << endl;
                 cout << " Armor costs 5 gold per set. " << endl;
                 cin >> armor;
                 if (armor >= 20) // Checks if player has enough coints
                 {
                    armor = 0;
                    cout << " You do not have enough money for that. " << endl;
                 }
              }
              cout << endl;
              cost += (armor*5); // Updates cost
              coins = coins - cost; // Updates coins
              cout << " You have " << coins << " coins remaining. " << endl;
            break;
            case '4': // Cookware
               while(cookware == 0)
               {
                  cout << " Cauldrons cost 20 gold each and are used for making stews and boiling ingredients. They have a 2% chance of breaking each time you use one. " << endl;
                  cout << " Cast iron pans cost 10 gold and is used for sizzling ingredients. They have a 10% chance of breaking each time you use one. " << endl;
                  cout << " Ceramic pots cost 5 gold and are used for making stews and boiling ingredinets. They have a 25% chance of breaking each time you use one. " << endl;
                  do
                  {
                     cout << " Enter the number next to which item you would like to buy. " << endl; // Nested menu for types of cookware to purchase
                     cout << " 1. Cauldrons" << endl;
                     cout << " 2. Cast iron pans" << endl;
                     cout << " 3. Ceramic pots" << endl;
                     cout << " 4. Done/Exit " << endl;
                   
                     cin >> option2;
 
                     switch(option2)
                     {
                        case '1':
                           cout << " How many would you like to buy? " << endl;
                           cin >> numberC;
                        break;
                        case '2':
                           cout << " How many would you like to buy? " << endl;
                           cin >> numberI;
                        break;
                        case '3':
                           cout << " How many would you like to buy? " << endl;
                           cin >> numberP;
                        break;
                        case '4':
                           cout << " Thank you for buying cookware. " << endl;
                        break;
                        default:
                           cout << " Incorrect input. Please try again. " << endl;
                        break;
                     }
                  }while(option2 != '4'); // While they don't pick 4
 
                 cookware = (numberC*25) + (numberI*10) + (numberP*5); // Adds cost of cookware
                 if (cookware > 100) // Checks if there are enough coins
                 {
                    cookware = 0;
                    cout << " You don't have enough money. Please try again." << endl;
                 }
               }
               cost += (cookware); // Finds cost
               coins = coins - cost; // Updates coins
               cout << " You have " << coins << " coins remaining. " << endl; // Prints remaining coins
            break;
            case '5': // Quit
               cout << " Good bye. Good luck on your journey. " << endl;
            default: // If input is not 1-5
               cout << " Invalid option. Please try again. " << endl;
            break;
         }
         if (cost > 100) // If too many coins have been spent
         {
            cost = 0;
            coins = 100;
            cout << " You spent more money than you have. Please try again. " << endl;
         }
      }while (option != '5' && coins < 100 && coins >= 0);
 
      ofstream outFile; // Writes to a file
      outFile.open("Items.txt");
      if(outFile.is_open()) // If file is opened
      {
        outFile << " You bought: " << axes << " axe(s), " << club << " club(s), " << spear << " spear(s), " << crossBow << " crossbow(s), " << armor << " set(s) of armor, and " << ingredients << " kg of ingredients. " << endl;
        outFile.close(); // Closes file
      }
    
   }
   bool Materials::status()
   {
      if (coins == 100 || ingredients <= 0 || cookware <= 0 || weapons <= 0 || armor <= 0)
      {
         return false; // If materials haven't been changed
      }
      else
      {
         return true; // Else return true
      }
   }
  void Materials::storeRoomNum(int room)
  {
     // Sets all to zero
     float roomPrice; // = (1+(0.25*input)); FIX******
     float cost = 0.0;
     int axes = 0;
     int club = 0;
     int spear = 0;
     int crossBow = 0;
     int sword = 0;
     cookware = 0;
     armor = 0;
     ingredients = 0;
     int option;
     cout << " Welcome to my store " << endl;
     do
     {
        cout << " What would you like to purchase? " << endl;
        cout << " 1. Ingredients" << endl;
        cout << " 2. Weapons" << endl;
        cout << " 3. Armor" << endl;
        cout << " 4. Cookware" << endl;
        cout << " 5. Leave" << endl;
        cout << " Enter the number next to the items you would like to purchase. " << endl;
        cin >> option;
        switch (option)
        {
           case 1: // Ingredients
              cout << " You must purchase at least 1 kg of food to continue. " << endl;
              cout << " Food is now 25% more expensive than it was in the previous room. " << endl;
              while (ingredients == 0)
              {
                 cout << "How much do you wish to purchase? (1 kg costs 1 coin) " << endl;
                 cin >> ingredients;
                 if ((ingredients * roomPrice) > coins) // Checks for enough coins
                 {
                    ingredients = 0;
                    cout << " You do not have enough money, please purchase less than 100. " << endl;
                 }
              }
              cost += (ingredients*1*roomPrice); // Updates cost
              coins = coins - cost; // Updates coins
              cout << endl;
              cout << " You have " << coins << " coins remaining. " << endl; // Prints remaining coins
              cout << endl;
           break;
           case 2: // Weapons
              int weaponAmount;
              cout << " Weapons are now 25% more than they were in the previous room. " << endl;
              while(weaponAmount == 0)
              {
                 cout << " How many clubs do you wish to purchase? " << endl;
                 cin >> club;
                 cout << " How many spears do you wish to purchase? " << endl;
                 cin >> spear;
                 cout << " How many crossbows do you wish to purchase? " << endl;
                 cin >> crossBow;
                 cout << " How many battle-axes do you wish to purchase? " << endl;
                 cin >> axes;
                 cout << " How many longswords do you wish to purchase? " << endl;
                 cin >> sword;
                 weaponAmount = club + spear + crossBow + axes + sword; // Finds new weapon count
                 if ((weaponAmount) > 5) // If more than 5 weapons
                 {
                    weaponAmount = 0;
                    cout << " You purchased too many weapons. Please try again and buy 5 or less. " << endl;
                 }
              }
              cout << endl;
    
               // Updates cost
              cost += (club*2*roomPrice) + (spear*2*roomPrice) + (crossBow*5*roomPrice) + (axes*5*roomPrice) + (sword*5*roomPrice);
              coins = coins - cost; // Updates coins
              cout << " You have " << coins << " coins remaining. " << endl; // Prints remaining coins
            break;
            case 3: // Armor
              while(armor == 0)
              {
                 cout << " Armor is 25% more expensive than it was in the previous room. " << endl;
                 cin >> armor;
                 armor = (armor*5*roomPrice); // Initial armor
                 if (armor >= coins) // Checks for enough coins
                 {
                    armor = 0;
                    cout << " You do not have enough money for that. " << endl;
                 }
              }
              cout << endl;
              cost += (armor); // Updates cost
              coins = coins - cost; // Updates coins
              cout << " You have " << coins << " coins remaining. " << endl; // Prints remaning coins
           break;
           case 4: // Cookware
              while(cookware == 0)
              {
                 int c = 0;
                 int i = 0;
                 int p = 0;
                 cout << " The prices for these items are 25% higher than they were in the previous room. " << endl;
                 int option2;
                 int numberC = 0;
                 int numberI = 0;
                 int numberP = 0;
                 do
                 {
                    cout << " Enter the number next to which item you would like to buy. " << endl;
                    cout << " 1. Cauldrons" << endl;
                    cout << " 2. Cast iron pans" << endl;
                    cout << " 3. Ceramic pots" << endl;
                    cout << " 4. Done/Exit" << endl;
                    cout << endl;
                    int op;
                    cin >> op;
 
                    if (op == 1) // Cauldrons
                    {
                       cout << " How many would you like to buy? " << endl;
                       cin >> numberC;
                    }
                    else if (op == 2) // Cast iron pans
                    {
                       cout << " How many would you like to buy? " << endl;
                       cin >> numberI;
                    }
                    else if (op == 3) // Ceramic pots
                    {
                       cout << " How many would you like to buy? " << endl;
                       cin >> numberP;
                    }
                    else if (op == 4) // Done/Exit
                    {
                       cout << " Thank you for buying cookware. " << endl;
                    }
                    else
                    {
                       cout << " Incorrect input. Please try again. " << endl;
                    }
                 }while(option2 != 4);
 
                 cookware = (numberC*25*roomPrice) + (numberI*10*roomPrice) + (numberP*5*roomPrice); // Updates cookware
                 if (cookware > coins) // Chekcs for enough coins
                 {
                    cookware = 0;
                    cout << " You don't have enough money. Please try again." << endl;
                 }
              }
              cost += (cookware); // Updates cost
              coins = coins - cost; // Upsates coins
              cout << " You have " << coins << " coins remaining. " << endl; // Prints remaining coins
           break;
           case 5: // Quit
              cout << " Good bye. Good luck on your journey. " << endl;
           default: // If input is not 1-5
              cout << " Invalid option. Please try again. " << endl;
           break;
        }
        if (cost > 100) // Checks for overspending
        {
           cost = 0;
           coins = 100;
           cout << " You spent more money than you have. Please try again. " << endl;
        }
        else // Prints remaining coins
        {
           cout << " You have " << coins << " coins left " << endl;
        }
     }while (option != 5 && cost < 100); // End loop
  }
 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Gun.h"
#include "armor.h"
using namespace std;

// This is the Item Classes ID print as a string



class Gunslist
{
public:
    enum GunsEnum {glock, usp, berreta92, mac10, mp5k_pdw, M16, g36c};
    Gunslist(Gunslist::GunsEnum value);
    string AsString();

protected:
    GunsEnum value;
};

Gunslist::Gunslist(Gunslist::GunsEnum initvalue)
{
    value = initvalue;
}

string Gunslist::AsString()
{
    switch (value)
    {
    case glock:
        return "Glock 18";
    case usp:
        return "Usp Tactical";
    case berreta92:
        return "Berreta 92 Model";
    case mac10:
        return "Mac 10";
    case mp5k_pdw:
        return "Mp5k Pdw";
    case M16:
        return "M16";
    case g36c:
        return "G36c";
    default:
        return "Not Found";
    }
}
    class Bulletslist
{
public:
    enum Bullet_CallibersEnum {Bullet_9mmParabellum, Bullet_556NATO };
    Bulletslist(Bulletslist::Bullet_CallibersEnum value1);
    string AsString1();

protected:
    Bullet_CallibersEnum value1;
};

Bulletslist::Bulletslist(Bulletslist::Bullet_CallibersEnum initvalue1)
{
    value1 = initvalue1;
}

string Bulletslist::AsString1()
{
    switch (value1)
    {
    case Bullet_9mmParabellum:
        return "9mm Parabellum";
    case Bullet_556NATO:
        return "5.56 NATO";
    default:
        return "Not Found";
    }
}

class Magazinelist
{
public:
    enum Magazine_TypesEnum {one_9x9mmParabellum, one_12x9mmParabellum, one_15x9mmParabellum, one_30x9mmParabellum, one_20x556NATO, one_30x556NATO };
    Magazinelist(Magazinelist::Magazine_TypesEnum value2);
    string AsString2();

protected:
    Magazine_TypesEnum value2;
};

Magazinelist::Magazinelist(Magazinelist::Magazine_TypesEnum initvalue2)
{
    value2 = initvalue2;
}

string Magazinelist::AsString2()
{
    switch (value2)
    {
    case one_9x9mmParabellum:
        return "9x9mm Parabellum";
    case one_12x9mmParabellum:
        return "12x9mm Parabellum";
    case one_15x9mmParabellum:
        return "15x9mm Parabellum";
    case one_30x9mmParabellum:
        return "30x9mm Parabellum";
    case one_20x556NATO:
        return "20x 5.56 NATO STAGNAT";
    case one_30x556NATO:
        return "30x 5.56 NATO STAGNAT";
    default:
        return "Not Found";
    }
}


int main()
{

system("COLOR 0e");
double a, b, c, d, five_cents = 0.05, ten_cents = 0.10, twenty_cents = 0.20, fifty_cents = 0.50, one_dollar = 1.00, two_dollars = 2.00, five_dollars = 5.00, ten_dollars = 10.00, twenty_dollars = 20.00, fifty_dollars = 50.00, one_hundred_dollars = 100.00;


// These are the initial GUI values
    double hp_amount = 100;
    double bank_amount = 10;
    double hunger_amount = 10;
    double energy_amount = 100;
    // This is Money Collection to add $100.05
    bank_amount += five_cents += one_hundred_dollars;


// This is the GUI symbol reference for the player
    string character_hp = "HP: ";
    string charater_hp_fraction = "/100";

    string character_money = "Money : $";

    string character_hunger = "Hunger level: ";
    string character_hunger_fraction = "/10";

    string character_energy = "Energy Level: ";
    string character_energy_fraction = "%";

    string character_guns = "Guns: ";
    string character_armor = "Armor: ";

// this is the GUI for the 1st man
    string man_hp = "HP: ";
    string man_hp_fraction = "/100";

//changes the value:
    hp_amount += 0;
    bank_amount += 0;
    hunger_amount += 0;
    energy_amount += 0;


// This is the GUI
    cout << character_hp;
    cout << hp_amount;
    cout << charater_hp_fraction;
    cout << "  ";
    cout << character_money << " ";
    cout << bank_amount;
    cout << "  ";
    cout << character_hunger ;
    cout << hunger_amount;
    cout << character_hunger_fraction;
    cout << "  ";
    cout << character_energy ;
    cout << energy_amount;
    cout << character_energy_fraction;
    cout << endl;
    cout << character_guns << " ";
    cout << endl;
    cout << character_armor<< " ";
    cout << endl;
    cout << endl;
    cout << endl;





// This is the Item Classes

Armorclasses ArmorSuit_test;

Gunstats glock_test;


















// This is the Game play

     int path1;
     int path2;
     int idle;

  cout << "You wake up out of bed theres a DRAWER beside the bed there is also a WARDROBE  and a DOOR.... select your path!" << endl;
  cout << endl;
  cout << "press '1' to open the DRAWER." << endl;
  cout << "press '2' to  open the WARDROBE." << endl;
  cout << "press '3' to go through the DOOR" << endl;

  cin >> path1;


 if (path1 == 1)

 {

  cout << "<You have found a GLOCK in the DRAWER>" << endl;
  cout << endl;
   cout << endl;

   // This Assigns the Guns statistics
    Gunstats glock_test;
    glock_test.Guntype = glock;
    glock_test.Magazine = one_9x9mmParabellum;
    glock_test.Bullets = Bullet_9mmParabellum;
    glock_test.Magazine_ammo = 30;
    glock_test.Magazine_mag_capacity = 9;



// Displaying the guns name
    Gunslist Gunlisttype = Gunslist::glock;
    cout << Gunlisttype.AsString() << endl;

// Selecting the magazine for the gun
    Magazinelist Magazinelisttype = Magazinelist::one_9x9mmParabellum;
    cout << "Magazine Type: " << Magazinelisttype.AsString2() << endl;

// Selecting the bullet for the gun
    Bulletslist Bulletslisttype = Bulletslist::Bullet_9mmParabellum;
    cout << "Bullets  Type: " << Bulletslisttype.AsString1() << endl;

// This displays the rounds and the magazine capacity for the gun
    cout << "Number of Rounds: " << glock_test.Magazine_ammo << " Rounds" << endl;
    cout << "Magazine Capacity: " << glock_test.hk9x9mm << endl;

  }
  cout << "press '1' to go through the DOOR";
  cout << endl;
cin >> path2;
if (path2 == 1)

 {

   cout << "<You opened the DOOR>" << endl;
   cout << endl;
   cout << endl;

  }

 if (path1 == 2)

 {

  cout << "<You have found BODY ARMOR>" << endl;
  cout << endl;
   cout << endl;

ArmorSuit_test.bodyarmor_on();
cout << ArmorSuit_test.hp_amount << " HP" << endl;

  }
cout << "press '1' to go through the DOOR";
cout << endl;
cin >> path2;
if (path2 == 1)

 {

   cout << "<You opened the DOOR>" << endl;
   cout << endl;
   cout << endl;

  }
 if (path1 == 3)

 {

   cout << "<on your way out the door you find $200>" << endl;
   cout << endl;
   cout << endl;

  }

cout << "press 'ENTER' to goto the next scene";
cin >> idle;





// Scene 2 - Game play

   int path3;
   int path4;

  cout << "You see a MAN in the hallway there is also a FIREAXE on the wall and theres a DOOR to exit the building" << endl;
  cout << endl;
  cout << "press '1' to SHOOT the MAN with GLOCK." << endl;
  cout << "press '2' to use the FIREAXE on the MAN." << endl;
  cout << "press '3' to go through the DOOR" << endl;
cout << endl;
  cin >> path3;


 if (path3 == 1)

 {
     double glock_magazine = 9, glock_ammo = 30;
  double man_hp_amount = 100;
  cout << man_hp_amount << man_hp << endl;
  cout << "Shooting the man.." << endl;


  glock_test.shoot_gun_glock();
  cout << glock_test.Bullet_damage << " HP" << endl;


   cout << endl;
   cout << endl;

  }
  cout << "press '1' to shoot again" << endl;
if (path4 == 1)
{
  glock_test.shoot_gun_glock();
  cout << glock_test.Bullet_damage << " HP" << endl;
}
cin >> path4;

 if (path3 == 2)

 {

  cout << "<You use the FIREAXE on the MAN>" << endl;
  cout << endl;
  cout << "You Killed him and found $430.50" << endl;
   cout << endl;
   bank_amount += fifty_cents += twenty_dollars += ten_dollars += one_hundred_dollars += one_hundred_dollars+= one_hundred_dollars+= one_hundred_dollars;


  }

 if (path3 == 3)

 {

   cout << "<on your way out the door you find $200>" << endl;
   cout << endl;
   cout << endl;

  }
cout << "press 'ENTER' to goto the next scene";
cin >> idle;







return 0;

}

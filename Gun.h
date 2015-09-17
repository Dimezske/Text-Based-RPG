#ifndef GUN_H_INCLUDED
#define GUN_H_INCLUDED
#include <cstdlib>

using namespace std;

enum Gun_Types
{
    pistol,
    submachinegun,
    assaultrifle

};

enum Guns
{
    glock,
    usp,
    berreta92,
    mac10,
    mp5k_pdw,
    M16,
    g36c
};
enum Magazine_Types
{

   // pistol magazine

   one_9x9mmParabellum,
   one_12x9mmParabellum,

   // sub machine gun magazines
   one_15x9mmParabellum,
   one_30x9mmParabellum,

    // assault rifle magazines
    one_20x556NATO,
    one_30x556NATO
};
enum Bullet_Callibers
{
    // pistol calibers and sub machine guns calibers
    Bullet_9mmParabellum,
    // assault rifle calibers
    Bullet_556NATO
};
class Gunstats
{
public:


    Gun_Types type;  //gun class
    Guns Guntype;   // what gun it is
    Bullet_Callibers Bullets;
    Magazine_Types Magazine; //what type of magazine it is
    double Magazine_ammo;  // the amount of ammo number
    double Magazine_mag_capacity ;  //this is going to be how much ammo can fit into the magazine
    double Bullet_damage;   //this is going to be how much damage it takes from the hp
    double hp_amount = 100;
    double man_hp_amount = 100;
    double hk9x9mm = 9, hk12x9mm = 12, hk15x9mm = 15, hk30x9mm = 30, colt20x556NATOstagnat = 20, colt30x556NATOstagnat = 30;
double glock_magazine = 9, glock_ammo = 30;



// this is the random number generator for bullets out of a magazine
      int ranged_rand(int begin, int end)
      { return rand()%(end-begin)+begin; }




//this is the Gun tester

    void shoot_gun_assaultrifle() // this is going to be the function for when the gun shoots


    {
    Magazine_ammo -= ranged_rand(-1,8);
    Magazine_mag_capacity -= ranged_rand(-1,8); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 50;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 50;
if (Magazine_mag_capacity <= 0) { Magazine_mag_capacity = 30; cout << "Reloading!" << endl; }


if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }









// This is the Glock

    void shoot_gun_glock() // this is going to be the function for when the gun shoots


    {

     // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage -= glock_ammo -= ranged_rand(-1,3);
    Bullet_damage -= glock_magazine -= ranged_rand(-1,3);
       // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 10;
if (hk9x9mm <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }









//This is the Usp tactical

   void shoot_gun_usp() // this is going to be the function for when the gun shoots


    {

    hk9x9mm -= ranged_rand(-1,3); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 15;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
   Bullet_damage = man_hp_amount -= 15;
if (hk12x9mm <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }









// This is the Berreta

   void shoot_gun_berreta92() // this is going to be the function for when the gun shoots


    {

    hk9x9mm -= ranged_rand(-1,3); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 20;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 20;
if (hk12x9mm <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }









// This is the MAC10

  void shoot_gun_MAC10() // this is going to be the function for when the gun shoots


    {

    hk9x9mm -= ranged_rand(-1,8); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 30;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 30;
if (hk15x9mm <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }









// This is the Mp5pdw
  void shoot_gun_MP5pdw() // this is going to be the function for when the gun shoots


    {

    hk9x9mm -= ranged_rand(-1,8); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 35;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 35;
if (hk30x9mm <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }








// This is the M16
  void shoot_gun_M16() // this is going to be the function for when the gun shoots


    {

    hk9x9mm -= ranged_rand(-1,5); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 40;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 40;
if (colt20x556NATOstagnat <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }








// This is the G36c
  void shoot_gun_G36c() // this is going to be the function for when the gun shoots


    {

    hk9x9mm -= ranged_rand(-1,8); // this is the bullet taking out of the magazine and shooting a random amount of 2 to 6 bullets at a time
    Bullet_damage = hp_amount -= 50;   // this is the bullet taking health away from the player, in time i am going to make it take health away from bad guys
    Bullet_damage = man_hp_amount -= 50;
if (colt30x556NATOstagnat <= 0)
            cout << "Reloading!" << endl;

if (Magazine_ammo <= 0)
            cout << "Out of Ammo!" << endl;
    }
};

#endif // GUN_H_INCLUDED


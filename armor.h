#ifndef ARMOR_H_INCLUDED
#define ARMOR_H_INCLUDED

using namespace std;

enum Armors
{
    LeatherJacket,
    TacticalVest,
    BodyArmor,
    HeavySwatArmor

};
class Armorclasses
{
public:

     Armors Armortype;
     double hp_amount;

void leatherjacket_on()
{
 hp_amount += 110;
}

void tacticalvest_on()
{
   hp_amount += 120;
}

void bodyarmor_on()
{
    hp_amount = 160;
}

void heavyswatarmor_on()
{
    hp_amount += 320;
}


};

#endif // ARMOR_H_INCLUDED

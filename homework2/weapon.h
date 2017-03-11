#ifndef __WEAPON_H__
#define __WEAPON_H__


#include "armor.h"
#include <map>
#include <string>
#include <list>


typedef int PunchingCapacity;
typedef int WeaponSpeed;
typedef int WeaponDistance;
typedef int WeaponState;
typedef int WeaponType;




class Weapon
{
private:
	WeaponSpeed speed;
	WeaponDistance distance;
	WeaponState state;
	std::map<ArmorType,PunchingCapacity> punchingCapacity;
	

public:
	Weapon();
	virtual ~Weapon();
	PunchingCapacity getPunchingCapacity(ArmorType armor);
	WeaponDistance getDistance();
	WeaponSpeed getSpeed();
	WeaponState getState();
	virtual void interact() = 0;

};

class Shovel: public Weapon
{

public:
	Shovel();
	~Shovel();
};

class Sword: public Weapon
{

public:
	Sword();
	~Sword();
};

class Bow: public Weapon
{

public:
	Bow();
	~Bow();
};

class Hammer: public Weapon
{

public:
	Hammer();
	~Hammer();
};



#endif
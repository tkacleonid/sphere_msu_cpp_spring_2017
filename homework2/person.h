#ifndef __PERSON_H__
#define __PERSON_H__

#include "weapon.h"
#include "armor.h"
#include <map>
#include <string>
#include <list>


typedef int PersonForce;
typedef int PersonEndurance;
typedef int PersonSpeed;
typedef int WeaponMastery;
typedef int PersonState;




class Person
{
private:
	PersonForce force;
	PersonEndurance endurance;
	PersonSpeed speed;
	std::map<WeaponType,WeaponMastery> weaponsMastery;
	std::list<Weapon> weapons;
	std::list<Armor> armors;
	PersonState state;

public:
	Person();
	virtual ~Person();
	bool takeWeapon(Weapon weapon);
	bool putOnArmor(Armor armor);
	PersonForce getForce();
	PersonEndurance getEndurance();
	PersonSpeed getSpeed();
	WeaponMastery getWeaponMastery(WeaponType weapon);
	std::list<Weapon> getWeapons();
	std::list<Armor> getArmors();
	PersonState getState();
	virtual void interact() = 0;

};

class CountryMan: public Person
{

public:
	CountryMan();
	~CountryMan();
};

class Archer: public Person
{

public:
	Archer();
	~Archer();
};

class Knight: public Person
{

public:
	Knight();
	~Knight();
};



#endif
#ifndef __ARMOR_H__
#define __ARMOR_H__


#include "weapon.h"
#include <map>
#include <string>
#include <list>


typedef int ProtectionCapacity;
typedef int SpeedPenalty;
typedef int ArmorState;
typedef int ArmorType;




class Armor
{
private:
	SpeedPenalty speedPenalty;
	ArmorState state;
	std::map<WeaponType,ProtectionCapacity> protectionCapacity;
	

public:
	Armor();
	virtual ~Armor();
	ProtectionCapacity getProtectionCapacity(WeaponType weapon);
	SpeedPenalty getSpeedPenalty();
	ArmorState getState();
	virtual void interact() = 0;

};

class ChainArmor: public Armor
{

public:
	ChainArmor();
	~ChainArmor();
};

class LatsArmor: public Armor
{

public:
	LatsArmor();
	~LatsArmor();
};





#endif
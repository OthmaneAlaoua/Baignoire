//
// Created by Othmane on 16/02/2020.
//

#ifndef STEP04_ZOMBIEMONSTER_HH
#define STEP04_ZOMBIEMONSTER_HH

#include "Character.hh"
#include "TimeManager.hh"




class ZombieMonster : public Character{
private:
    int zombieLife = 100;
public:
    ZombieMonster();
    void Update() override ;
};


#endif //STEP04_ZOMBIEMONSTER_HH

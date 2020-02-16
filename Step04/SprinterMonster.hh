//
// Created by Othmane on 16/02/2020.
//

#ifndef STEP04_SPRINTERMONSTER_HH
#define STEP04_SPRINTERMONSTER_HH

#include "TimeManager.hh"
#include "Character.hh"


class SprinterMonster : public Character {
private:
    int monsterLife = 25;
public:
    SprinterMonster();
    void Update() override;
};


#endif //STEP04_SPRINTERMONSTER_HH

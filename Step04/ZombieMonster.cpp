//
// Created by Othmane on 16/02/2020.
//

#include "TimeManager.hh"
#include "ZombieMonster.hh"

TimeManager &timeZombieManager = TimeManager::GetInstance();


ZombieMonster::ZombieMonster() {
    SetLife(100);
};


void ZombieMonster::Update() {


    double time = timeZombieManager.GetElapsedTime();

    double zombieX = GetX() + (time / 1000);
    double zombieY = GetY() + (time / 1000);

    SetX(zombieX);
    SetY(zombieY);
}
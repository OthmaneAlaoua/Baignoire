//
// Created by Othmane on 16/02/2020.
//
#include "SprinterMonster.hh"
#include "TimeManager.hh"
#include "Character.hh"

//Test sans le mettre dans le constructeur
TimeManager &timeMonsterManager = TimeManager::GetInstance();

SprinterMonster::SprinterMonster() {
    SetLife(25);
}

void SprinterMonster::Update() {
    double timeMonster = timeMonsterManager.GetElapsedTime();
    double monsterX = GetX() + ((timeMonster / 1000) * 5);
    double monsterY = GetY() + ((timeMonster / 1000) * 5);

    SetX(monsterX);
    SetY(monsterY);
}


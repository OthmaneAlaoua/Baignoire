//
// Created by Othmane on 16/02/2020.
//

#include "MonsterFactory.hh"
#include "SprinterMonster.hh"
#include "ZombieMonster.hh"
#include "Character.hh"
#include "MonsterFactory.hh"

using namespace std;

Character *MonsterFactory::Create(const string &type) {
    if (type == "ZombieMonster") {
        return (selectedMonster = new ZombieMonster());
    } else if (type == "SprinterMonster") {
        return (selectedMonster = new SprinterMonster());
    } else {
        return selectedMonster = nullptr;
    }
}
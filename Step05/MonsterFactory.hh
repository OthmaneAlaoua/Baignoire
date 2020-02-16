//
// Created by Othmane on 16/02/2020.
//

#ifndef STEP05_MONSTERFACTORY_HH
#define STEP05_MONSTERFACTORY_HH
#include "Character.hh"
#include <string>
using namespace std;

class MonsterFactory {
private:
    Character *selectedMonster;
public:
    Character *Create(const string&);
};


#endif //STEP05_MONSTERFACTORY_HH

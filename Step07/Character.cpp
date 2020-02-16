//
// Created by Othmane on 10/02/2020.
//

#include "Character.hh"
using namespace std;

Character::Character() {};
Character::~Character() {};

double Character::GetX() const {
    return this->X;
}
void Character::SetX(double sendedX) {
    this->X = sendedX;
    Display();
}

double Character::GetY() const {
    return this->Y;
}
void Character::SetY(double sendedY) {
    this->Y = sendedY;
    Display();
}

int Character::GetLife() const {
    return this->Life;
}

void Character::SetLife(int sendedLife) {
    this->Life = sendedLife;
    Display();
}

/**Ajout partie INterfaces */
void Character::AddObserver(IObserver* obs)
{
    listObserver.push_back(obs);
};

void Character::RemoveObserver(IObserver* obs)
{
    listObserver.remove(obs);
};



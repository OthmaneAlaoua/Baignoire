//
// Created by Fatou DIALLO on 10/02/2020.
//

#include "Character.hh"
using namespace std;

Character::Character() {};
Character::~Character() {}

double Character::GetX() {
    return this->X;
}
void Character::SetX(double) {
    this->X = double;
}

double Character::GetY() const {
    return this->Y;
}
double Character::SetY(double) {
    this->Y = double;
}

int Character::GetLife() const {
    return this->Life;
}

void Character::SetLife(int) {
    this->Life = int;
}
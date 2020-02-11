//
// Created by Fatou DIALLO on 10/02/2020.
//

#ifndef STEP1_CHARACTER_H
#define STEP1_CHARACTER_H

#include "AbstractEntity.hh"

class Character : public AbstractEntity {
    Character();

    virtual ~Character();

public:
    double GetX() cont ;
    void SetX(double);

    double GetY()const;
    double SetY(double);

    int GetLife() const ;
    void SetLife(int);

private:
    double const X  ;
    double const Y  ;
    int Life const ;
};


#endif //STEP1_CHARACTER_H

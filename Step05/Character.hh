//
// Created by Othmane on 10/02/2020.
//

#ifndef STEP1_CHARACTER_H
#define STEP1_CHARACTER_H

#include "AbstractEntity.hh"

class Character : public AbstractEntity {


public:
    virtual ~Character();

    double GetX() const;
    void SetX(double);

    double GetY() const;
    void SetY(double);

    int GetLife() const;
    void SetLife(int);

protected:
    Character();
private:
     double X;
     double Y;
     int Life;
};


#endif //STEP1_CHARACTER_H

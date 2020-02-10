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

private:
    double X  ;
    double Y  ;
    int Life const ;
};


#endif //STEP1_CHARACTER_H

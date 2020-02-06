//
// Created by Othmane ALAOUA on 06/02/2020.
//

#ifndef STEP1_ABSTRACTENTITY_H
#define STEP1_ABSTRACTENTITY_H


class AbstractEntity {
private:
    virtual void Draw() = 0;

    virtual void Update() = 0;

public:
    AbstractEntity();

    ~AbstractEntity();

};


#endif //STEP1_ABSTRACTENTITY_H

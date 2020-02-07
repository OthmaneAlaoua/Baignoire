//
// Created by Othmane ALAOUA on 06/02/2020.
//

#ifndef STEP1_ABSTRACTENTITY_HH
#define STEP1_ABSTRACTENTITY_HH


class AbstractEntity {
private:
    virtual void Draw() = 0;

    virtual void Update() = 0;

public:
    virtual AbstractEntity();

    virtual ~AbstractEntity();

};


#endif //STEP1_ABSTRACTENTITY_HH

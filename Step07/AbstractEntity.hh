//
// Created by Othmane ALAOUA on 06/02/2020.
//

#ifndef STEP1_ABSTRACTENTITY_HH
#define STEP1_ABSTRACTENTITY_HH


class AbstractEntity {
protected:
    AbstractEntity();

public:
    virtual ~AbstractEntity();
    virtual void Draw();
    virtual void Update();
};

#endif //STEP1_ABSTRACTENTITY_HH

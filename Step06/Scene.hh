//
// Created by Othmane on 16/02/2020.
//

#ifndef STEP06_SCENE_HH
#define STEP06_SCENE_HH
#include "AbstractEntity.hh"
#include <list>
#include <vector>

class Scene {
private:
    std::list<AbstractEntity*> entityList;
public:
    std::list<AbstractEntity*> GetEntities() const;

    void AddEntity(AbstractEntity*);
    void RemoveEntity(AbstractEntity*);
    void Update();
};


#endif //STEP06_SCENE_HH

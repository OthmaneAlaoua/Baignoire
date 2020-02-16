//
// Created by Othmane on 16/02/2020.
//

#include "Scene.hh"
#include "AbstractEntity.hh"
#include "TimeManager.hh"
#include <vector>

TimeManager& timeSceneManager = TimeManager::GetInstance();

std::list<AbstractEntity*> Scene::GetEntities() const {
    return this->entityList;
}
void Scene::AddEntity(AbstractEntity* entity)
{
    this->entityList.push_back(entity);
};

void Scene::RemoveEntity(AbstractEntity* entity)
{
    this->entityList.remove(entity);
};

void Scene::Update()
{
    timeSceneManager.Update();

    for (AbstractEntity* entity : entityList) {
        entity->Update();
    };

    for (AbstractEntity* entity :  entityList) {
        entity->Draw();
    };

};
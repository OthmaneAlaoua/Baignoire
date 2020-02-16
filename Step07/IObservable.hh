//
// Created by Othmane on 16/02/2020.
//

#ifndef STEP07_IOBSERVABLE_HH
#define STEP07_IOBSERVABLE_HH
#include <set>

// eviter la boucle infinie double inclusion
#include "IObserver.hh"
class IObserver;

class IObservable{
public:
    //Pure pour definir une "interface"
        virtual void AddObserver(IObserver*) = 0;
        virtual void RemoveObserver(IObserver*) = 0;
        virtual ~IObservable() {};
};
#endif //STEP07_IOBSERVABLE_HH

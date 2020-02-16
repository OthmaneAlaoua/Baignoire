//
// Created by Othmane on 16/02/2020.
//

#ifndef STEP07_IOBSERVER_HH
#define STEP07_IOBSERVER_HH


/**
 *evite boucle infini inclusion
 */
#include "IObservable.hh"s
class IObservable;

class IObserver {
public:
    virtual void Notify(IObservable *) = 0;

    virtual ~IObserver() {};
};

#endif //STEP07_IOBSERVER_HH


//
// Created by Othmane on 10/02/2020.
//

#ifndef STEP1_CHARACTER_H
#define STEP1_CHARACTER_H

#include "AbstractEntity.hh"
#include "IObservable.hh"
#include "IObserver.hh"
#include <list>

class Character : public AbstractEntity , IObservable {


public:
    virtual ~Character();

    double GetX() const;

    void SetX(double);

    double GetY() const;

    void SetY(double);

    int GetLife() const;

    void SetLife(int);

    /**Ajout de la partie Interface*/
    std::list<IObserver *> listObserver;

    void AddObserver(IObserver *) override;

    void RemoveObserver(IObserver *) override;

    void Display() {
        for (IObserver *obs : listObserver) {
            obs->Notify(this);
        }
    }

protected:
    Character();

private:
    double X;
    double Y;
    int Life;
};


#endif //STEP1_CHARACTER_H

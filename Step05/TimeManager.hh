//
// Created by Othmane on 15/02/2020.
//

#ifndef STEP03_TIMEMANAGER_HH
#define STEP03_TIMEMANAGER_HH

#include <time.h>
#include <chrono>

class TimeManager {
private:
    unsigned int ElapsedTime;
    unsigned int StartedTime;
    unsigned int Temp;
    static TimeManager* singleton;
    TimeManager();

public:
    void Start();
    void Update();
    unsigned int GetElapsedTime()const;
    unsigned int GetStartedTime()const;


    static TimeManager& GetInstance();

    TimeManager(const TimeManager&) = delete;
    TimeManager& operator=(const TimeManager&) = delete;

};


#endif //STEP03_TIMEMANAGER_HH

//
// Created by Othmane on 15/02/2020.
//

#include "TimeManager.hh"

using namespace std;

TimeManager::TimeManager() {};
TimeManager *TimeManager::singleton = 0;

void TimeManager::Start() {
    this->StartedTime =  std::chrono::duration_cast<std::chrono::milliseconds>
            (std::chrono::system_clock::now().time_since_epoch()).count();
}

void TimeManager::Update() {
    this->Temp = this->ElapsedTime;
    this->ElapsedTime =  std::chrono::duration_cast<std::chrono::milliseconds>
            (std::chrono::system_clock::now().time_since_epoch()).count();;
}

TimeManager& TimeManager::GetInstance() {
    if (TimeManager::singleton == 0) {
        TimeManager::singleton = new TimeManager();
    }
    return *(TimeManager::singleton);
}

unsigned TimeManager::GetElapsedTime() const {
    return (this->ElapsedTime - this->Temp);
}

unsigned TimeManager::GetStartedTime() const {
    return (this->ElapsedTime - this->StartedTime);
}



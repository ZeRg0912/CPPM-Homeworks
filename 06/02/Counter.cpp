#include "Counter.h"

Counter::Counter() {
        this->num = 1;
    }
Counter::Counter(int initNum) {
        this->num = initNum;
    }

int Counter::getNumber() {
        return num;
    }

void Counter::increase()
    {
        this->num++;
    }

void Counter::decrease()
    {
        this->num--;
    }
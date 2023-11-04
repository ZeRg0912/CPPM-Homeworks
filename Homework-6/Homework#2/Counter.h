#pragma once

class Counter
{
private:
    int num;

public:
    Counter();

    Counter(int);

    int getNumber();

    void increase();

    void decrease();
};
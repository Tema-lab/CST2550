#include <time.h>

#ifndef TIMESELECTIONSORT_STOPWATCH_H
#define TIMESELECTIONSORT_STOPWATCH_H


class Stopwatch {
private:
    clock_t start_time;
public:
    void start();
    double stop();
};


#endif

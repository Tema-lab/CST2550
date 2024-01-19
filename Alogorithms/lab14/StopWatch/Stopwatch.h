#include <time.h>

#ifndef STOPWATCH_STOPWATCH_H
#define STOPWATCH_STOPWATCH_H
class Stopwatch {
private:
    clock_t start_time;
public:
    void start();
    double stop();
};
#endif //STOPWATCH_STOPWATCH_H

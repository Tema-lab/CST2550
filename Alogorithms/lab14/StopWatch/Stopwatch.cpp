#include "Stopwatch.h"
#include <ctime>
#include <iostream>

void Stopwatch::start() {
    //recording the start time
    start_time = clock();
}

double Stopwatch::stop() {
    clock_t end = clock();

    double duration_in_seconds = static_cast<double>(end - start_time) / CLOCKS_PER_SEC;
    return duration_in_seconds;
}
#include <iostream>
#include "Stopwatch.h"

int main() {
    Stopwatch stopwatch;
    int tmp; //temporary variable for measuring time
    //start stopwatch
    stopwatch.start();

    for(int i = 0; i <= 10000; i++){
        std::cout << i << std::endl;
    }
    double end_time = stopwatch.stop();

    std::cout << "Elapsed time: " << end_time << " seconds" << std::endl;
    return 0;
}

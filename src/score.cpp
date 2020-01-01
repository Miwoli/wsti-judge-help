#include "score.hpp"

void Score::add(double result) {
    if (result > max) {
        max = result;
    }
    if (result < min) {
        min = result;
    }
    total += result;
}

double Score::get_avarage() {
    total -= max;
    total -= min;

    return total/judges_num;
}
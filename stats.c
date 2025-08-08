#include "stats.h"
#include <stddef.h>

struct Stats compute_statistics(const float* numbers, int count) {
    float avg =0.0f;
    for(int i=0;i<=4;i++)
    avg +=numbers[i];
     
    avg = avg/count;
}struct  stats s;
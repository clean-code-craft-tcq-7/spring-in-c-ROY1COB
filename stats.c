#include "stats.h"
#include <stddef.h>

struct Stats compute_statistics(const float* numbers, int count) {
    float avg =0.0f;
    float Min = 0.0f;
    float Max = 0.0f;

    for (int i = 0; i < count; i++) {
        if (i==0){
            Min=numbers[i];
            Max=numbers[i];
        }else{
        if(numbers[i] < Min) {
            Min = arr[i];
        }
        if(numbers[i] > Max) {
            Max = arr[i];
        }
    }
        avg +=numbers[i];
    }
struct  stats s;
s.average = avg/count;
s.max= Max;
s.min = Min; 
return s;
}
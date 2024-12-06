#include "utils.h"

#include <stdio.h>

float average_grade(int grades[], int length)
{
    if (length == 0) {
        return 0.0f; // Avoid division by zero
    }

    int sum = 0;
    
    for (int i = 0; i < length; i++)
    {
        sum += grades[i];
    }

    return (float)sum / (float)length;
}
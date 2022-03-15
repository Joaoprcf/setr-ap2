
#include <stdio.h>

#define VEC_SIZE 20

void vInit(double *vec, int size) {
    for(int i=1; i<=size; i++) {
        vec[i-1] = i;
    }
}



double vAvg(double *vec, int size) {

    return 0;
}


double vSum(double *vec, int size) {
    double sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += vec[i];
    }
    
    return sum;
}



int main() {
    double vector[VEC_SIZE];
    vInit(vector, VEC_SIZE);
    for (size_t i = 0; i < VEC_SIZE; i++)
    {
        printf("%f ", vector[i]);
    }
    printf("\n");
    printf("%f\n", vSum(vector, VEC_SIZE));
    return 0;
}
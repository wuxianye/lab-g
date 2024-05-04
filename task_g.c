#include <stdio.h>
#include <stdlib.h>
#include "task_g.h"
int main(void) {
	// Your code below here
    FILE* fptr = fopen("numbers.txt", "r");
    if (fptr == NULL) {
        printf("Error!");
        return 1;
    }

    double numbers[20];
    int count = 0;
    while (count < 20 && fscanf(fptr, "%lf", &numbers[count]) == 1) {
        ++count;
    }

    if (count < 20) {
        printf("Error!");
        fclose(fptr);
        return 1;
    }

    fclose(fptr);

    double max;
    find_max_less_than_10(numbers, 20, &max);

    if (max == -1) {
        printf("Error!");
    }
    else {
        printf("%.2f", max);
    }



	return 0;
}
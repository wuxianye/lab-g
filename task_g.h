#pragma once
void find_max_less_than_10(const double a[], const int n, double* max) {
	// Your code below here
    *max = -1; 
    for (int i = 0; i < n; ++i) {
        if (a[i] < 10 && a[i] > *max) {
            *max = a[i];
        }
    }
}
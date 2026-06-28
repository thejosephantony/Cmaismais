/*
 * Analise de Complexidade 3.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */
 
void a(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}
// O(n)

void b(int n) {
    for (int i = 0; i < n; i += 5) {
        cout << i << endl;
    }
}
// O(n)

void c(int n) {
    for (int i = 1; i < n; i *= 3) {
        cout << i << endl;
    }
}
// O(log n)

void d(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j *= 2) {
            cout << i << " " << j << endl;
        }
    }
}
// O(n log n)

void e(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
}

// O(n²)




#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}


/*
 * Analise de Complexidade 4.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */
void ex1(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}

/*
tempo: O(n)
memoria: O(1)

*/

void ex2(int n) {
    for (int i = 0; i < n; i += 3) {
        cout << i << endl;
    }
}

/*
tempo: O(n)
memoria: O(1)

*/

void ex3(int n) {
    for (int i = 1; i < n; i *= 2) {
        cout << i << endl;
    }
}

/*
tempo: O(log n)
memoria: O(1)

*/

void ex4(int n) {
    while (n > 1) {
        n /= 2;
    }
}

/*
tempo: O(log n)
memoria: O(1)

*/


void ex5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
}

/*
tempo: O(n²)
memoria: O(1)
*/

void ex6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j *= 2) {
            cout << i << " " << j << endl;
        }
    }
}
/*
tempo: O(n log n)
memoria: O(1)

*/

void ex7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
}

/*
tempo: O(n²)
memoria: O(1)

*/
void ex8(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << i << " " << j << endl;
        }
    }
}
/*
tempo: O(n * m)
memoria: O(1)

*/

void ex9(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " " << j << endl;
        }
    }
}
/*
tempo: O(n²)
memoria: O(1)

*/

void ex10(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }
}
/*
tempo: O(n³)
memoria: O(1)

*/
#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}


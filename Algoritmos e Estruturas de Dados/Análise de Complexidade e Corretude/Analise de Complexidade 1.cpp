/*
 * Analise de Complexidade 1.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

void exemplo1(const vector<int>& v) {
    cout << v[0] << endl;
}
// O(1)


void exemplo2(const vector<int>& v) {
    for (int x : v) {
        cout << x << endl;
    }
}

// O(n)


void exemplo3(const vector<int>& v) {
    for (int x : v) {
        cout << x << endl;
    }

    for (int x : v) {
        cout << x * 2 << endl;
    }
}

// O(n)

void exemplo4(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            cout << i << " " << j << endl;
        }
    }
}
// O(n²)

void exemplo5(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            cout << v[i] << " " << v[j] << endl;
        }
    }
}
// O(n²)

void exemplo6(int n) {
    for (int i = 1; i < n; i *= 2) {
        cout << i << endl;
    }
}
// O(log n)


void exemplo7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j *= 2) {
            cout << i << " " << j << endl;
        }
    }
}

// O(n log n)


int main(int argc, char **argv)
{
	
	return 0;
}


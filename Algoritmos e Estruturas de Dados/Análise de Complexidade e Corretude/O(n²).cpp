/*
 * O(n²).cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

void imprimirPares(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            cout << v[i] << " " << v[j] << endl;
        }
    }
}
/*
Complexidade O(n²) -> implica laço externo → n vezes
laço interno → n vezes para cada volta do externo

*/



#include <iostream>

int main(int argc, char **argv)
{
	
	return 0;
}


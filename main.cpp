#include <iostream>
#include "algoritmo.h"
#include "personaje.cpp"

using namespace std;

int main() {
    // int arr[] = {-4, 6, -3, 3, 2, -8};
    // string arr[] = {"michel", "davalos", "boites", "alvarez"};
    Personaje arr[] = {
        Personaje("michel", "zombie", 100, 10),
        Personaje("davalos", "troll", 10, 0),
        Personaje("boites", "guerrero", 0, 0),
    };
    seleccion(arr);
    // burbuja(arr);

    return 0;
}
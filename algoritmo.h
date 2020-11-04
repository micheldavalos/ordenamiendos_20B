#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include <iostream>

using namespace std;

template <typename T>
void intercambia(T arr[], size_t i, size_t j)
{
    T temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

template <typename T, size_t N>
void seleccion(T (&arr)[N])
{
    for (size_t i = 0; i < N - 1 ; i++) {
        size_t min = i;
        for (size_t j = i + 1; j < N; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        intercambia(arr, i, min);
    }
}

template <typename T, size_t N>
void burbuja(T (&arr)[N])
{
    for (size_t i = N - 1; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                intercambia(arr, j, j+1);
            }
        }
    }
}


// void seleccion(int arr[])
// {
//     size_t N = sizeof(arr) - 1;

//     for (size_t i = 0; i < N - 1 ; i++) {
//         size_t min = i;
//         for (size_t j = i + 1; j < N; j++) {
//             if (arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         intercambia(arr, i, min);
//     }
// }



#endif
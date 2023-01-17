#include <iostream>
#include "array_functions.h"

using namespace std;

int main() {
    const int SIZE = 20;
    int arr[SIZE];
    int indexes[SIZE];

    RandomFillArray(arr, SIZE, 0, 5);
    Print(arr, SIZE);

    int max = Max(arr, SIZE);
    FindAll(arr, SIZE, max, indexes);
    PrintIndexes(indexes, SIZE);
    Print(indexes, SIZE);

    return 0;
}

#pragma once

#include <iostream>

using namespace std;

void RandomFillArray(int arr[], int size, int start, int end) {
    for (int i = 0; i < size; ++i) {
        arr[i] = start + rand() % (end - start + 1);
    }
}

void Print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void NegativeFillArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = -1;
    }
}

void FindAll(int arr[], int size, int key, int indexes[]) {
    NegativeFillArray(indexes, size);
    for (int i = 0, j = 0; i < size; ++i) {
        if (arr[i] == key) {
            indexes[j] = i;
            j++;
        }
    }
}

void PrintIndexes(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == -1) continue;

        cout << arr[i] << " ";
    }
    cout << endl;
}
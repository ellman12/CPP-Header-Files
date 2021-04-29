#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <iostream>

//Typical bubble sort function
void bubbleSort(int numbers[], int size)
{
    int flag = 0; //0 means not sorted, 1 means it is sorted MAYBE.
    do
    {
        int i = 0;
        flag = 1;
        while (i < size - 1)
        {
            if (numbers[i] > numbers[i + 1])
            {
                std::swap(numbers[i], numbers[i + 1]);
                flag = 0;
            }
            i++;
        }
    } while (flag == 0);
}
#endif
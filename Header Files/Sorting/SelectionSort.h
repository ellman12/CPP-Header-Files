#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <iostream>

//Typical selection sort fnction
void selectionSort(int numbers[], int size)
{
    int startIndex;         //Index where comparison is starting.
    int compareIndex;       //Indices after startIndex that are compared to startIndex. If smaller, they swap.
    int smallestIndexSoFar; //When checking for smaller values, this stores the index of the smallest value found thus far.

    //1. Start at beginning of list (0). 5. Continue until 2nd to last item.
    for (startIndex = 0; startIndex < size - 1; startIndex++)
    {
        compareIndex = startIndex;
        smallestIndexSoFar = startIndex;

        //2. Check every item after current index. Constantly updating, if necessary, the index of the smallest value.
        for (compareIndex = startIndex + 1; compareIndex < size; compareIndex++)
        {
            //3. Swap places with smallest item found.
            if (numbers[compareIndex] < numbers[smallestIndexSoFar])
                smallestIndexSoFar = compareIndex;
        }
        std::swap(numbers[startIndex], numbers[smallestIndexSoFar]);
        //4. Move to next index (1) and repeat.
    }
}
#endif
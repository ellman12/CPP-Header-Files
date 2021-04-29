#ifndef LINEAR SEARCH_H
#define LINEAR SEARCH_H

//Linear search. Return -1 on error. Else return array index of key.
int linearSortedSearch(int array[], int size, int key)
{
    int returnVal = -1;

    for (int i = 0; i < size && array[i] <= key; i++)
        if (array[i] == key)
            return i;

    return returnVal;
}
#endif
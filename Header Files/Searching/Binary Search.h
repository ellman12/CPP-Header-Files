#ifndef BINARY SEARCH_H
#define BINARY SEARCH_H

int binarySearch(int array[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right)
    {
        mid = ((left + right) / 2);
        if (array[mid] == key)
            return mid;
        else if (array[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
#endif
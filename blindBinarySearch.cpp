#include <iostream>

int binarySearch(int vec[], int x, int low, int high)
{
    if (low > high)
        return 0;
    
    int midddle = (high + low) / 2;
    if (vec[middle] == x)
        return 1;
    else if(x < vec[middle])
    {
        binarySearch(vec, x, low, midddle -1);
    }
    else
    {
        binarySearch(vec, x, midddle + 1 , high);
    }
}
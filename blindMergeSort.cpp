#include <iostream>

using namespace std;

void merge(int vec[],int low, int middle ,int high);


void mergeSort(int vec[], int low, int high)
{
    if (low > high)
        return;
    
    int middle = (low + high) / 2;
    
    mergeSort(vec, low, middle);
    mergeSort(vec,middle + 1, high);
    merge(vec,low, middle, high);
}

void merge(int vec[],int low, int middle ,int high)
{
    int n1 = middle - low + 1;
    int n2 = high - low;

    int L[n1], R[n2];

    for(int i = 0; i < n1;i++)
    {
        L[i] = vec[low+i];
    }
    for(int j = 0; j < n2;j++)
    {
        R[j] = vec[j + middle + 1];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while(i < n1 && n2 < n2)
    {
        if (L[i] <= R[j])
        {
            vec[k] = L[i];
            i++;
        }
        else
        {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        vec[k] = L[i];
        i++;
        k++;
    }

    while(j < n1)
    {
        vec[k] = L[j];
        j++;
        k++;
    }
}


int main()
{
    int size;
    cin >> size;
    int vec[100];
    for(int i = 0; i < size;i++)
    {
        cin >> vec[i];
    }
    for(int i = 0; i < size;i++)
    {
        cout << vec[i];
    }
    mergeSort(vec,0, size-1);
    for(int i = 0; i < size;i++)
    {
        cout << vec[i];
    } 

}
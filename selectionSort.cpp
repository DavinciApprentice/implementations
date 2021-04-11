#include <iostream>

using namespace std;

void swapNums(int& a, int& b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void selectionSort(int* arr, int length)
{
    for(int i = 0; i < length -1;i++)
    {
        for(int j = i ; j < length;j++)
        {
            if (arr[i] > arr[j])
            {
                swapNums(arr[i], arr[j]);
            }
        }
    }
}

void printArray(int arr[], int length)
{
    for(int i = 0; i < length;i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {3,2,2,1,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "======= BEFORE SORTING =======" << endl;
    printArray(arr, size);
    selectionSort(arr, size);
    cout << "======= AFTER SORTING ========" << endl;
    printArray(arr,size);
}
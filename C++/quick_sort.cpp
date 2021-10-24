// Quick sort algorithm avgO(nlogn)

#include <iostream>

using namespace std;

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    // i is index of the smaller value
    int i = (low - 1); 
    int swap;

    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        { 
            swap = array[i];
            array[i++] = array[j];
            array[j] = swap;
        }
    }

    swap = array[i + 1];
    array[i + 1] = array[high];
    array[high] = swap;

    return (i + 1);
}

void quick_sort(int array[], int low, int high)
{
    high -= 1;

    if (low < high)
    {
        // Partitioning index
        int part_i = partition(array, low, high);

        // Sort left
        quick_sort(array, low, part_i - 1);
        // Sort right
        quick_sort(array, part_i + 1, high);
    }
}

int main()
{
    const int length = 10;
    int array[length] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

    cout << "Initial array:" << endl;
    for (int i = 0; i < length; i++)
        cout << array[i] << ' ';

    cout << endl;

    quick_sort(array, 0, length);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < length; i++)
        cout << array[i] << ' ';
}

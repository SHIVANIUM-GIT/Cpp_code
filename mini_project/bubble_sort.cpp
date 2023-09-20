#include <iostream>
void bubble_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size = 0;
    int arr[] = {10, 2, 3, 5, 1, 7, 8, 6, 9, 4};
    size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    for (int element : arr)
    {
        std::cout << element << " ";
    }

    return 0;
}
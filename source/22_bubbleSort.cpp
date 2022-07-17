#include <iostream>

using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// void sort(int arr[])
// {
//     int n = (sizeof(arr) / sizeof(arr[0]));
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//                 swap(arr, i, j);
//         }
//     }
// }

int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int n = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
    cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
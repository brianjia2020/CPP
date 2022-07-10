#include <iostream>

using namespace std;

int main()
{
    // array: stored at a continuous memory
    //        every element is of the same data type

    // datatype array_name[array length]
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // second way of defining an array
    // default value is 0
    int arr2[5] = {10, 20, 30, 40, 50};

    // third way of defining an array
    // system will get array length of 5 when compiling
    int arr3[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
        cout << arr2[i] << endl;
        cout << arr3[i] << endl;
    }
    // every integer in memory is 4 bytes
    // an array of 4 integer is 20 bytes
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;

    // number of elements in the array
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    // check the head memory address of the array
    cout << (long)arr << endl;
    // get the first element memory address
    cout << (long)&arr[0] << endl;
    cout << (long)&arr[1] << endl;
    return 0;
}
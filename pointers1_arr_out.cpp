#include <iostream>
using namespace std;

void print(int* arr, size_t arr_size);

int main()
{
    setlocale(LC_ALL, "RU");

    int arr1[]{ 5, 7, 56, 23, 8, 31, 0, 0, 1, 7, 97, 72, 35, 59 };
    int arr2[]{ 0, 3, 8, 9, 4, 3 };
    int arr3[]{ 3, 5, 6, 10, 14, 5, 9, 85, 67, 76 };

    print(arr1, sizeof(arr1)/sizeof(*arr1));
    print(arr2, sizeof(arr2)/sizeof(*arr2));
    print(arr3, sizeof(arr3)/sizeof(*arr3));

    return 0;
}

void print(int* arr, size_t arr_size) {
    for (int i = 0; i < arr_size; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

#include <iostream>

void swap(int* a, int* b);
void reverse(int* arr, size_t arr_size);
void print(int* arr, size_t arr_size);

int main()
{
    setlocale(LC_ALL, "RU");

    int arr1[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "До функции reverse: ";
    print(arr1, sizeof(arr1)/sizeof(*arr1));

    reverse(arr1, sizeof(arr1) / sizeof(*arr1));
    std::cout << "После функции reverse: ";
    print(arr1, sizeof(arr1) / sizeof(*arr1));

    return 0;
}

void swap(int* a, int* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void reverse(int* arr, size_t arr_size) {
    for (int i = 0, j = arr_size - 1; i < arr_size / 2; ++i, --j)
    {
        swap(&arr[i], &arr[j]);
    }
}
void print(int* arr, size_t arr_size) {
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
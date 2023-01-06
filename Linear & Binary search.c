#include <stdio.h>
int LinerSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[], int size, int key)
{
    int mid, start = 0, end = size - 1;
    while(start<=end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 7, 8, 9, 15, 45, 89};
    int size = sizeof(arr) / sizeof(int);
    int element = 45;
    int ans = BinarySearch(arr, size, element);
    printf("%d", ans);
    return 0;
}

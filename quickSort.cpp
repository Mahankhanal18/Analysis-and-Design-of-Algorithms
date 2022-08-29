#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

/**
 * TODO
 * !choose the pivot as last
 * !initialize i to -1, if it is the smallest it will come to 0th index
 * ?increasing the value of i by 1
 * !swapping the value
 * ? The pivot will be in the middle and the higher value will go to right and lower value element will go to left
 * !recursively calling the quicksort function until lower value is less than higher value
*/
//? Example of array a = {2,7,4,8,5}
//! 2,4,7,8,5
//! 2,4,5,8,7
//! 2,4,5,7,8

int helperFunction(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = helperFunction(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

void display(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << "\n";
}

int main()
{
    int n, A[100];
    cout << "Enter the number of element \n";
    cin >> n;
    cout << "Enter elements \n";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    quickSort(A, 0, n - 1);
    cout << "Sorted Array using quicksort is: \n";
    display(A, n);
    return 0;
}
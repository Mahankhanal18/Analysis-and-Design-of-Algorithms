#include <iostream>
using namespace std;

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int index = array[i];
        int j = i - 1;
        while (index < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = index;
    }
}

int main()
{
    int n, A[100];
    cout << "Enter the number of element \n";
    cin >> n;
    cout << "Enter elements \n";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    insertionSort(A, n);
    cout << "Sorted array using insertion sort:\n";
    display(A, n);
}
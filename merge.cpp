
#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;

    int temp[high - low + 1];

    i = low;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int m = low + (high - low) / 2;
        mergeSort(arr, low, m);
        mergeSort(arr, m + 1, high);
        merge(arr, low, m, high);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n, A[100];
    cout << "Enter the number of element \n";
    cin >> n;
    cout << "Enter elements \n";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    mergeSort(A, 0, n - 1);
    cout << "Sorted Array using mergesort is: \n";
    display(A, n);
    return 0;
}
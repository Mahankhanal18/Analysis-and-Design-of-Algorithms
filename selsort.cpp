// Execute the selection sort program and show the output by 12.45pm

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int A[], int n)
{
    int i,j,min;
    for (i=0; i<n-1; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
            if (A[j]<A[min])
            min = j;
         swap(A[min],A[i]);
    }
}


void display(int A[], int size)
{
    for (int i=0; i<size; i++)
        cout<< " " <<A[i];
        cout<<"\n";
}

int main()
{
    int n, A[100];
    cout << "Enter the number of element \n";
    cin >> n;
    cout<< "Enter elements \n";
    for (int i=0; i<n;i++)
    cin>>A[i];
    selectionSort(A,n);
    cout << "Sorted Array is: \n";
    display(A,n);
    return 0;
}
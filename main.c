// Implement selection sort in a programming language of your choice

#include<stdio.h>


int sortArray(int arr[], int n)
{

    int min = arr[0], temp;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            arr[i] = temp;
            temp = min;
            min = arr[i];
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        i++;
    }
}

int main()
{
    int n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for %d ",i);
        scanf("%d",&a[i]);
    }

    printf("%d",a[0]);
    sortArray(a,n);
}
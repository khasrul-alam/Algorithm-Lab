#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size)
{
    int i;
    printf("Ascending Order:");
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int i,n,t,larger=0,smaller=0,pick;
    printf("Enter number of test case:");

    printf("Enter array size:");
    scanf("%d",&n);
    int ara[n];
    printf("Enter array size:");
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    printf("Pick value:");
    scanf("%d",&pick);
    quickSort(ara, 0, n-1);
    printArray(ara, n);
    for(i=0; i<n; i++)
    {
        if(ara[i]<pick)
            smaller++;
        else if(ara[i]>pick)
            larger++;
    }
    printf("Larger value: %d\n",larger);
    printf("Small value: %d\n",smaller);


    return 0;
}

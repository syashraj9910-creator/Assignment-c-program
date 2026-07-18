#include <stdio.h>

void display(int arr[], int n);
void largest(int arr[], int n);
void smallest(int arr[], int n);
void reverse(int arr[], int n);
void removeDuplicates(int arr[], int *n);
void frequency(int arr[], int n);
void linearSearch(int arr[], int n);
void sort(int arr[], int n);

int main()
{
    int arr[100], n, i, choice;

    printf("===== LEETCODE ARRAY CHALLENGE =====\n");

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Largest & Second Largest\n");
        printf("3. Smallest & Second Smallest\n");
        printf("4. Reverse Array\n");
        printf("5. Remove Duplicates\n");
        printf("6. Frequency Count\n");
        printf("7. Search Element\n");
        printf("8. Sort Array\n");
        printf("9. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display(arr, n);
                break;

            case 2:
                largest(arr, n);
                break;

            case 3:
                smallest(arr, n);
                break;

            case 4:
                reverse(arr, n);
                break;

            case 5:
                removeDuplicates(arr, &n);
                break;

            case 6:
                frequency(arr, n);
                break;

            case 7:
                linearSearch(arr, n);
                break;

            case 8:
                sort(arr, n);
                break;

            case 9:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 9);

    return 0;
}

void display(int arr[], int n)
{
    int i;

    printf("Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void largest(int arr[], int n)
{
    int i;
    int first = arr[0], second = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    printf("Largest = %d\n", first);
    printf("Second Largest = %d\n", second);
}

void smallest(int arr[], int n)
{
    int i;
    int first = arr[0], second = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    printf("Smallest = %d\n", first);
    printf("Second Smallest = %d\n", second);
}

void reverse(int arr[], int n)
{
    int i, temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Array Reversed Successfully.\n");
}

void removeDuplicates(int arr[], int *n)
{
    int i, j, k;

    for(i = 0; i < *n; i++)
    {
        for(j = i + 1; j < *n;)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < *n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                (*n)--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Duplicates Removed.\n");
}

void frequency(int arr[], int n)
{
    int i, j, count;

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
}

void linearSearch(int arr[], int n)
{
    int key, i;

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            return;
        }
    }

    printf("Element Not Found.\n");
}

void sort(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array Sorted Successfully.\n");
}
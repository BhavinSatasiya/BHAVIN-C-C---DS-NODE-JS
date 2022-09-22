#include<stdio.h> 
void insertionSort(int array[], int size) 
{ 
    for (int step = 1; step < size; step++) 
    { 
        int key = array[step]; 
        int j = step - 1; 
        while (key < array[j] && j >= 0) 
        { 
            array[j + 1] = array[j]; 
            --j; 
        } 
        array[j + 1] = key; 
    } 
} 
int main() 
{ 
    int a[30], n, i; 
    printf("How many elements are u going to enter?: "); 
    scanf("%d", &n); 
    printf("Enter array elements:"); 
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
    insertionSort(a,n); 
    printf("\nSorted array is :"); 
    for (i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    return 0; 
}

// suppose:-
    // 77 33 44 11 88

    // 77 is the base..compare with all(no element bigger than 77)
    //so inc..

    // compare 33 

    // 33  77  44  11  88

    // 33  44  77  11  88

    // 33  44  11  77  88
    // 33  11  44  77  88
    // 11  33  44  77  88

    // compare 88 with all
    // 11  33  44  77  88
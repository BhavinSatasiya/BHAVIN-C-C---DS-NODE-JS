#include <stdio.h>
#define n 25
int totalElement;
// void print(int number[25])
// {
//     int i;
//     for (i = 0; i < totalElement; i++)
//         scanf("%d", &number[i]);
// }

void quicksort(int number[25], int first, int last)
{
    int i, j, pivot, temp;

    if (first < last)
    {
        printf("\n inside quick  : ");
        for (int i = 0; i < totalElement; i++)
            printf(" %d", number[i]);

        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
int main()
{
    int i, number[25];

    printf("How many elements are u going to enter?: ");
    scanf("%d", &totalElement);

    printf("Enter %d elements: ", totalElement);
    for (i = 0; i < totalElement; i++)
        scanf("%d", &number[i]);

    // print(number);

    quicksort(number, 0, totalElement - 1);

    printf("\nOrder of Sorted elements: ");
    for (i = 0; i < totalElement; i++)
        printf(" %d", number[i]);

    // print(number);
    return 0;
}

/*
0
10 9 8 7 6 5 4 3 2 1

f   l    f < l
0   9       


 1 4 3 2 5
 1 4 3 2 5
 */

//suppose

// 10 80 30 90 40 50 70 here 70 is pivot..

// 10<70 not
// 30<70 not
// 80<70  T

    // 10  30  80  90  40  50  70

//90<70 not
// 40<70 T

    // 10  30  40  80  90  50  70

//50<70 T

    // 10  30  40  50  80  90  70
    // 10  30  40  50  70  90  80

    // quicksort left
    // 10  30  40  50

    // quicksort right
    // 90   80
    //80    90

    // 10  30  40  50  70  80   90
    

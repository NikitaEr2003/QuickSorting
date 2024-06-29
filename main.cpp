#include <iostream>

void swap(int & a, int & b)
{   int c = a;
    a = b;
    b = c;
}

int partition (int arr[], int size)
{
    int middle = (size - 1)/2;

    int pivot = arr[middle];

    int i = 0;

    int j = size - 1;

    while (i <= j)
    {
        while (arr[i] < pivot)
        {
        i++;
        }

        while (arr[j] > pivot)
        {
        j--;
        }
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

    }
    return i;
}
void QuickSort (int* arr, int size)
{
    if (size <= 1)
    {
        return;
    }
    int pivot = partition(arr,size);

    QuickSort(arr,pivot);
    QuickSort(arr + pivot, size - pivot);
}

void print_array( int * arr, int size)
{
    for ( int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

int main() {


    int array_1[] = {19,14,22,22,17,22,13,21,20,24,18,10,17,16,17,20,22,11,20,16,14,13,10,22,18,14,16,24,19,17};

    int sizeof_array_1 = sizeof(array_1)/ sizeof(array_1[0]);

    print_array(array_1,sizeof_array_1);

    QuickSort(array_1,sizeof_array_1);

    print_array(array_1,sizeof_array_1);

    std::cout << std::endl << std::endl;


    int array_2[] = {16,17,14,20,22,20,17,22,16,19,23,24,20,22,21,18,14,16,17,21,10,11,19,23,11,11,17,17,11,21,17,11,17,16,12,11,16,22,23,16};

    int sizeof_array_2 = sizeof(array_2)/ sizeof(array_2[0]);

    print_array(array_2,sizeof_array_2);

    QuickSort(array_2,sizeof_array_2);

    print_array(array_2,sizeof_array_2);

    std::cout << std::endl << std::endl;


    int array_3[] = {21,15,19,18,23,12,18,18,19,23,12,20,15,22,21,18,19,20,12,16,20,14,17,13,10,23,19,14,10,22,19,12,24,23,22,15,13,22,18,18,11,23,24,17,10};

    int sizeof_array_3 = sizeof(array_3)/ sizeof(array_3[0]);

    print_array(array_3,sizeof_array_3);

    QuickSort(array_3,sizeof_array_3);

    print_array(array_3,sizeof_array_3);


    return 0;
}
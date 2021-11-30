#include <stdio.h>

void swap(int array[], long pos1, long pos2)
{
    long tmp;
    tmp=array[pos1];
    array[pos1]=array[pos2];
    array[pos2]=tmp;
}

void sameArrs(int arr1[], int arr2[], int n){
    for(int i = 0; i < n; ++i){
        if(arr1[i] == arr2[i]){
            continue;
        }
        else{
            printf("Arrays are not similar");
            return;
        }
    }
    printf("Arrays are similar");
}

void bubbleSort(int * arr, int n)
{
    int i,j,temp;
    i=n;
    if(i>0)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        bubbleSort(arr,n-1);
    }
    else
    {
        return;
    }
}

void checkSort(int array1[], int array2[], int size){
    for(int i = 0; i < (size - 1); ++i){
        if(array1[i] >= array1[i+1]){
            continue;
        }
        else{
            printf("First array is not sorted.\n");
            break;
        }
    }
    for(int i = 0; i < (size - 1); ++i){
        if(array2[i] >= array2[i+1]){
            continue;
        }
        else{
            printf("Second array is not sorted.\n");
            return;
        }
    }
    printf("Arrays are sorted.\n");
}

void qs_sort(int array[], long start, long end)
{
    long head = start, tail = end - 1, tmp;
    long diff = end - start;
    long pe_index;
    // якщо залишилося менше двох елементів – кінець рекурсії
    if (diff < 1) return;
    if (diff == 1)
        if (array[start] < array[end])
        {
            swap(array, start, end);
            return;
        }
    // пошук індексу розділяючого елементу pe_index
    long m = (start + end) / 2;
    if (array[start] >= array[m])
    {
        if (array[m] >= array[end]) pe_index = m;
        else if (array[end] >= array[start]) pe_index = start;
        else pe_index = end;
    }
    else
    {
        if (array[start] >= array[end]) pe_index = start;
        else if(array[end] >= array[m]) pe_index = m;
        else pe_index = end;
    }
    long pe = array[pe_index]; // сам розділяючий елемент
    swap(array, pe_index, end);
    while (1)
    {
        while(array[head] > pe)
            ++head;
        while(array[tail] < pe && tail > start)
            --tail;
        if (head >= tail) break;
        swap(array, head++, tail--);
    }
    swap(array, head, end);
    long mid = head;
    qs_sort(array, start, mid - 1); // рекурсивний виклик для 1-ої підмножини
    qs_sort(array, mid + 1, end); // рекурсивний виклик для 2-ої підмножини
}
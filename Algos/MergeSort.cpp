#include <bits/stdc++.h>
using namespace std;

int arr[] = {1, 3, 4, 2, 5};

void mergesort(int start, int end)
{
    if (end <= start)
        return;
    int mid = (end + start) / 2;
    mergesort(start, mid);
    mergesort(mid + 1, end);
    int arr1[mid - start + 1];
    int arr2[end - mid];
    int ii = mid - start + 1;
    int jj = end - mid;
    int k = start;
    int i = 0;
    int j = 0;
    for (i = 0; i <= ii; i++)
        arr1[i] = arr[start + i];
    for (j = 0; j <= jj; j++)
        arr2[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    while (i < ii && j < jj)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < ii)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < jj)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }

    return;
}
int32_t main()
{
    int N = 5;
    mergesort(0, N - 1);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}
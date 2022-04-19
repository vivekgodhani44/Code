#include "bits/stdc++.h";
using namespace std;
class HeapSort
{

public:
    vector<int> heap;
    HeapSort(vector<int> Heap)
    {
        heap = Heap;
    }
    int left(int i) { return (2 * i) + 1; }
    int right(int i) { return (2 * i) + 2; }
    void heapify(int n, int i)
    {

        int largest = i;
        int l = left(i);
        int r = right(i);
        if (l < n && heap[l] > heap[largest])
            largest = l;
        if (r < n && heap[r] > heap[largest])
            largest = r;

        if (largest != i)
        {
            swap(heap[i], heap[largest]);
            heapify(n, largest);
        }
    }
    vector<int> sort()
    {
        int arrsize = heap.size();
        for (int i = arrsize / 2 - 1; i >= 0; i--)
            heapify(arrsize, i);
        for (int i = arrsize - 1; i >= 0; i--)
        {
            swap(heap[0], heap[i]);
            heapify(i, 0);
        }
        return heap;
    }
};

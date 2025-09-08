#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int r) {
    int n1 = mid - l + 1; // size of the left half
    int n2 = r - mid;     // size of the right half
    int left[n1], right[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) left[i] = a[l + i];
    for (int i = 0; i < n2; i++) right[i] = a[mid + 1 + i];

    int i = 0, j = 0, k = l;
    
    // Merge the temporary arrays back into the original array
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
        }
    }

    // Copy any remaining elements of left[] if any
    while (i < n1) {
        a[k++] = left[i++];
    }

    // Copy any remaining elements of right[] if any
    while (j < n2) {
        a[k++] = right[j++];
    }
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        // Recursively sort the first and second halves
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);

        // Merge the sorted halves
        merge(a, l, mid, r);
    }
}

int main() {
    // T.C. = O(n*logn)
    //S.C. = O(n1+n2) = O(n)
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}

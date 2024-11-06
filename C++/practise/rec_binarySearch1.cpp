#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int s, int e, int k) {
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == k) {
        int left = firstOccurrence(arr, s, mid - 1, k);
        return (left == -1) ? mid : left;
    }
    else if (arr[mid] > k) {
        return firstOccurrence(arr, s, mid - 1, k);
    }
    else {
        return firstOccurrence(arr, mid + 1, e, k);
    }
}

int lastOccurrence(int arr[], int s, int e, int k) {
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == k) {
        int right = lastOccurrence(arr, mid + 1, e, k);
        return (right == -1) ? mid : right;
    }
    else if (arr[mid] > k) {
        return lastOccurrence(arr, s, mid - 1, k);
    }
    else {
        return lastOccurrence(arr, mid + 1, e, k);
    }
}

int main() {
    int arr[7] = {1, 2, 3, 3, 3, 4, 5};
    int size = 7;
    int key = 3;

    cout << firstOccurrence(arr, 0, size - 1, key) << endl;
    cout << lastOccurrence(arr, 0, size - 1, key) << endl;
}

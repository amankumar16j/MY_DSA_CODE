#include <iostream>
using namespace std;

int binarySearch(int* playlist, int size, int duration) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (playlist[mid] == duration) {
            return mid;
        } else if (playlist[mid] < duration) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low;
}

int main() {
    int* playlist;
    int size, duration;

    //cout << "Enter the size of the playlist: ";
    cin >> size;

    playlist = (int*)malloc(size * sizeof(int));

    //cout << "Enter the sorted playlist durations:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> playlist[i];
    }

    //cout << "Enter the duration of the new song: ";
    cin >> duration;

    int index = binarySearch(playlist, size, duration);

    cout << index << endl;

    free(playlist);

    return 0;
}

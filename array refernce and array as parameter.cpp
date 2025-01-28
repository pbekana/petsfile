// this program shows a passing by reerence and array
#include<iostream>
using namespace std;

void farr(int a[], int size, int *m, int *m1, float *av) {
    int m2 = a[0], m3 = a[0];
    float sum = 0,ag;

    for(int i = 0; i < size; i++) {
        if(m3 < a[i]) {
            m3 = a[i];
        }
    }
    *m = m3;

    for(int i = 0; i < size; i++) {
        if(m2 > a[i]) {
            m2 = a[i];
        }
    }
    *m1 = m2;

    for(int i = 0; i < size; i++) {
        sum += a[i];
    }

    *av = sum / size;

}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int max, min;
    float aver;
    farr(arr, 5, &max, &min, &aver);
    cout << "Max element of the array: " << max << endl;
    cout << "Min element of the array: " << min << endl;
    cout << "Average of the elements of the array: " << aver << endl;

    return 0;
}

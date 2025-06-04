#include <iostream>

using namespace std;

void sort_ascending(int arr[], size_t size) {
    int min, index, temp;
    for (int i=0; i<size; i++) {
        min = arr[i];
        index = i;
        for (int j=i+1; j<size; ++j) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

void sort_descending(int arr[], size_t size) {
    int min, index, temp;
    for (int i=0; i<size; i++) {
        min = arr[i];
        index = i;
        for (int j=i+1; j<size; ++j) {
            if (arr[j] > min) {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int choose_num=0;
    int arr_size;
    int arr[arr_size];
    int num;

    cout << "오름차순 : 1, 내림차순 : 2" << endl;
    cin >> choose_num;
    // 배열 앱력 받기 구현
    cout << "배열의 갯수 입력 : " << endl;
    cin >> arr_size;

    for (int i=0; i<arr_size; i++) {
        cout << "숫자 입력 : " << endl;
        cin >> arr[i];
    }


    if (choose_num == 1) {
        sort_ascending(arr, arr_size);
    } else {
        sort_descending(arr, arr_size);
    }

    return 0;
}

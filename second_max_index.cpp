#include <bits/stdc++.h>

using namespace std;

int sec_max_index(int arr[], int size) {

        int max = 0, max2 = 0;
        
        for (int i = 0; i < size; i++) {
            if (arr[i] > max) {

                max2 = max;
                max = arr[i];

            }
            else if (arr[i] < max && arr[i] >= max2) {
                max2 = arr[i];
            }
        }

        for (int i = 0; i < size; i++) {
            if (arr[i] == max2) {
                return i;
            }
        }
    }

int main() {

    // unordered_map<int,int> indexes;
    // understand red-black tree and hash table structure
    int size;
    cin >> size;
    
    int arr[size];
    
    for (int i=0; i<size; i++){
        cin >> arr[i];
    } 
    cout << sec_max_index(arr,size);
}
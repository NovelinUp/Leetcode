#include "thehead.h"

class Solution {
public:
    vector<int> ans;
    vector<int> arr;
    int k;
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        this->arr = arr;
        this->k = k;
        quicksort(0, arr.size() - 1);
        return ans;
    }

    void quicksort(int left, int right) {
        vector<int> ans;
        if (left > right) return;
        int i = left, j = right;
        while (i < j) {
            while (i < j && arr[j] >= arr[left]) j--;
            while (i < j && arr[i] <= arr[left]) i++;
            swap(arr[i], arr[j]);
        }
        swap(arr[i], arr[left]);
        if (i > k) quicksort(left, i - 1);
        if (i < k) quicksort(i + 1, right);
        ans.assign(arr.begin(), arr.begin() + k);
        return;
    }
};
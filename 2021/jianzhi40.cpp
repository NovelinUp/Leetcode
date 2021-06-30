#include "thehead.h"

class Solution {
public:
    vector<int> ans;
    vector<int> arr;
    int k;
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        this->arr = arr;
        this->k = k;
        if (arr.size() <= k) return arr;
        return quicksort(0, arr.size() - 1);
    }

    vector<int> quicksort(int left, int right) {
        int i = left, j = right;
        while (i < j) {
            while (i < j && arr[j] >= arr[left]) j--;
            while (i < j && arr[i] <= arr[left]) i++;
            swap(arr[i], arr[j]);
        }
        swap(arr[i], arr[left]);
        if (i > k) return quicksort(left, i - 1);
        if (i < k) return quicksort(i + 1, right);
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
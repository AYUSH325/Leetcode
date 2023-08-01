#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         if (n == 0){
            return;
        } else if (m == 0){
            nums1 = nums2;
        } else {
            int i = m - 1;
            int j = n - 1;
            int k = m + n - 1;

            while(i >= 0 && j >= 0){
                if (nums1[i] >= nums2[j]){
                    nums1[k] = nums1[i];
                    i--;
                } else {
                    nums1[k] = nums2[j];
                    j--;
                }
                k--;
            }

            while (j >= 0){
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

    }

    void print(vector<int>& nums1, int m, int n){
        for (int i = 0; i < m + n; ++i){
            cout <<  nums1[i] << " " << endl;
        }
    }
};
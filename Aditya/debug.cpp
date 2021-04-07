#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();

    vector<int> nums3(n+m);

    int i=0,j=0,k=0;

    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            nums3[k] = nums1[i];
            i++;
            k++;
        } else {
            nums3[k] = nums2[j];
            j++;
            k++;
        }
    }

    if(j>=nums2.size()){
        for(;i<nums1.size(); i++,k++){
            nums3[k] = nums1[i];
        }
    } else {
        for(;j<nums1.size(); j++,k++){
            nums3[k] = nums2[j];
        }
    }

    if((n+m)%2 == 0){
        double ans = (nums3[(n+m)/2] + nums3[(n+m)/2 - 1])/2;
        return ans;
    } else {
        double ans = nums3[(n+m)/2];
        return ans;
    }
}

int main(){

    vector<int> nums1 = {};
    vector<int> nums2 = {1};

    cout<<findMedianSortedArrays(nums1, nums2)<<endl;

}
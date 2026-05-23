#include <iostream>
#include <vector>
using namespace std;

bool isPossiable(vector<int> nums, int n, int k, int mid);
int bookAllocation(vector<int> nums, int n, int k);

int main(){

    vector<int> arr = {10,20,30,40};
    int k = 2;

    int ans = bookAllocation(arr, arr.size(), k);
    cout << "answer for this problem is: " << ans << endl;

}

int bookAllocation(vector<int> nums, int n, int k){

    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += nums[i];
    }

    int e = sum;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s<=e){

        if(isPossiable(nums, n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}


bool isPossiable(vector<int> nums, int n, int k, int mid){

    int studentCount = 1;
    int PageCount = 0;

    for(int i = 0; i<n; i++){

        if(PageCount + nums[i] <= mid){
            PageCount += nums[i];
        }
        else{
            studentCount++;

            if(studentCount > k || nums[i] > mid){
                return false;
            }

            PageCount = nums[i];

        }
    }

    return true;
}
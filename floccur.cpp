//first and last occurence of x
#include<bits/stdc++.h>
using namespace std;

    int firstOcc(vector<int>nums, int key)
    {
        int s = 0, e = nums.size()-1;
        int ans = -1;
        while(s<=e)
        {
          int mid = s + (e-s)/2;
          if(nums[mid] == key)
          {
              ans = mid;
              e = mid-1;
          }
          else
          if(nums[mid] > key)
          {
              e = mid-1;
          }
          else
          {
              s = mid+1;
          }
         // return ans;
        }
        return ans;
    }

    int lastOcc(vector<int>nums, int key)
    {
        int s = 0, e = nums.size()-1;
        int ans = -1;
        while(s<=e)
        {
          int mid = s + (e-s)/2;
          if(nums[mid] == key)
          {
             ans = mid;
              s = mid+1;
          }
          else
          if(nums[mid] > key)
          {
              e = mid-1;
          }
          else
          {
              s = mid+1;
          }
          //return ans;
        }
       return ans;
    }
 int main(){
        vector<int> v = {2,8,8,8,8,8,11,13};
        int target=8;
        int first = firstOcc(v,target);
        int last = lastOcc(v,target);
        cout<< first <<endl<< last<<endl;
        int count = last-first+1;
        cout<<"count = "<<count;
}

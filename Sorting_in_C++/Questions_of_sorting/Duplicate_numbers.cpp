 #include<iostream>
 #include<algorithm>
 #include<vector>
 #include<string>
 #include<sstream>
 #include<math.h>
 using namespace std;
 
 int findDuplicate(vector<int>& nums) 
 {
        
        int i = 0;
        while(i < nums.size())
        {
            int ridx = nums[i] - 1;
            if(nums[i] == nums[ridx]) i++;
            else swap(nums[i], nums[ridx]);
        }
        return nums[nums.size()-1];
    }
 int main()
 {
    system("cls");
    int n;
    cout<<"Enter a size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter any "<<n<<" elements in array with duplicate number: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Duplicate number: "<<findDuplicate(v);
    return 0;
 }
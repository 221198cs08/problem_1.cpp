#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){
    vector<int> nums{};
    int value;
    for(int i = 1; i <= 10; i++){
        cin >> value;
        if(i % 2 == 0){
            nums.push_back(value);
        }
    }
    copy(nums.begin(),
         nums.end(),
         ostream_iterator<int>(cout, " "));
    return 0;
} 

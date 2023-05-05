#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

int main(){
    deque<int> nums{};
    int count;
    int value;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> value;
        nums.push_back(value);
    }
    copy(nums.begin(),
         nums.end(),
         ostream_iterator<int>(cout, " "));
    cout << endl;
    copy(nums.rbegin(),
         nums.rend(),
         ostream_iterator<int>(cout, " "));
    return 0;
}

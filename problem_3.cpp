#include <iostream>
using namespace std;

int main(){
    float english=4.0;
    float english_credit=3;
    float programming=3.7;
    float programming_credit=2;
    float math=3.3;
    float math_credit=2;
    float GPA;
    GPA=english*english_credit+programming*programming_credit+math*math_credit/english_credit+programming_credit+math_credit;
    cout<<GPA<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int day,year,month,month_day,result,result2,result3;
    cin>>day;
    year=365;
    month=12;
    month_day=30;
    result=day/year;
    result2=(day%year)/month_day;
    result3=(day%year)-(result2*month_day);
    cout<<result<<"\n"<<result2<<"\n"<<result3;
    return 0;
}

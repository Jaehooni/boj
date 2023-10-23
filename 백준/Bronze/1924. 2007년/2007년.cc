#include <iostream>
using namespace std;
int theNumberOfDayForEveryMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string dayWeek[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
int month, day;
int sumOfDay = 0;

int main(){
    cin >> month >> day;
    for (int i = 0; i < month; i++){
        sumOfDay += theNumberOfDayForEveryMonth[i];
    }
    sumOfDay += day;
    
    cout << dayWeek[sumOfDay % 7];
    
    return 0;
}
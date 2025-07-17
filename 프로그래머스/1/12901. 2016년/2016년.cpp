#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string day_of_week[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int days_in_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int total_days = 0;

    for (int i = 1; i < a; ++i) {
        total_days += days_in_month[i];
    }

    total_days += b;

    int day_index = (total_days + 4) % 7;
    
    return day_of_week[day_index];
}
#include <string>
#include <vector>
#include <algorithm> // sort 함수를 사용하기 위해 포함합니다.

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> hall_of_fame; 
    
    for (int daily_score : score) {
        hall_of_fame.push_back(daily_score);
        sort(hall_of_fame.begin(), hall_of_fame.end());

        if (hall_of_fame.size() > k) {
            hall_of_fame.erase(hall_of_fame.begin());
        }

        answer.push_back(hall_of_fame[0]);
    }
    
    return answer;
}
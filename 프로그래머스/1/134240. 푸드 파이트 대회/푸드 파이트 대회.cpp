#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(vector<int> food) {
    string answer = "";

    
    for (int i = 1; i < food.size(); ++i) {
       
        int count = food[i] / 2;

        
        for (int j = 0; j < count; ++j) {
            answer += to_string(i);
        }
    }

    
    string right_part = answer;
    reverse(right_part.begin(), right_part.end());

    
    answer = answer + "0" + right_part;

    return answer;
}
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> countX(10, 0);
    vector<int> countY(10, 0);
    
    for (char c : X) {
        countX[c - '0']++;
    }
    
    for (char c : Y) {
        countY[c - '0']++;
    }
    
    for (int i = 9; i >= 0; --i) {
        int common_count = min(countX[i], countY[i]);
        if (common_count > 0) {
            answer.append(common_count, (char)(i + '0'));
        }
    }
    if (answer.empty()) {
        return "-1";
    }
    if (answer[0] == '0') {
        return "0";
    }
    return answer;
}
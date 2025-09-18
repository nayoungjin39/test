#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = s[0];   
    int countX = 0;   
    int countOther = 0; 

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == x) countX++;
        else countOther++;
        if (countX == countOther) {
            answer++;
            if (i + 1 < s.size()) {
                x = s[i + 1];
            }
            countX = 0;
            countOther = 0;
        }
    }

    if (countX != 0 || countOther != 0) {
        answer++;
    }

    return answer;
}
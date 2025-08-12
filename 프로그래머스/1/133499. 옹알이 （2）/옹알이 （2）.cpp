#include <string>
#include <vector>
#include <regex>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    regex re("^(?!.*(ayaaya|yeye|woowoo|mama))(aya|ye|woo|ma)+$");

    for (auto &s : babbling) {
        if (regex_match(s, re)) {
            ++answer;
        }
    }
    return answer;
}
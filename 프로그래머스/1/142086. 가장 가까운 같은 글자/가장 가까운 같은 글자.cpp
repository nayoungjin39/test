#include <string>
#include <vector>
#include <map> 

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> last_position;

    for (int i = 0; i < s.length(); ++i) {
        char current_char = s[i];

        if (last_position.find(current_char) == last_position.end()) {

            answer.push_back(-1);
        } else {

            answer.push_back(i - last_position[current_char]);
        }

        last_position[current_char] = i;
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = 0; i < words.size(); ++i) {
        while (s.find(words[i]) != string::npos) {
            s.replace(s.find(words[i]), words[i].length(), to_string(i));
        }
    }
    
    return stoi(s);
}
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.length(); i++){
        if(islower(s[i])){
            if(s[i] + n > 'z'){
                answer += s[i] + n - 26;
            }else{
                answer += s[i] + n;
            }
        }
        else if(isupper(s[i])){
            if(s[i] + n > 'Z'){
                 answer += s[i] + n - 26;
            }else{
                answer += s[i] + n;
            }          
        }
        else{
            answer += ' ';
        }
    }
    return answer;
}
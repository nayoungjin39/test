#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int length = s.length();
        int middle = length/2;
        
        if(length % 2 ==0){
            answer = s.substr(middle -1,2);
        }else{
            answer = s.substr(middle, 1);
        }
            
    return answer;
}
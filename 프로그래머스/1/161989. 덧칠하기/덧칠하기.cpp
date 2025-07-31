#include <string>
#include <vector>
    
using namespace std;
    
int solution(int n, int m, vector<int> section) {
     int answer = 0;
     int painted_pos = 0;
    
    for(int i = 0; i < section.size(); i++){
        if(section[i] > painted_pos){
            painted_pos = section[i] + m - 1;
            answer++;
        }
    }

    return answer;
}
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int max_h = 0;

    for (const auto& size : sizes) {
        int longer = max(size[0], size[1]);
        int shorter = min(size[0], size[1]);
        
        max_w = max(max_w, longer);
        max_h = max(max_h, shorter);
    }
    
    int answer = max_w * max_h;
    return answer;
}
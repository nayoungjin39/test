#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> students(n + 2, 1);
    
    for (int r : reserve) {
        students[r]++;
    }
    for (int l : lost) {
        students[l]--;
    }
    
    for (int i = 1; i <= n; i++) {
        if (students[i] == 0) {
            if (students[i - 1] == 2) {
                students[i - 1]--;
                students[i]++;
            }
            else if (students[i + 1] == 2) {
                students[i + 1]--;
                students[i]++;
            }
        }
    }
    
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (students[i] >= 1) {
            answer++;
        }
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for(int a : numbers){
    answer += a;    
    }
    return answer / numbers.size();
}
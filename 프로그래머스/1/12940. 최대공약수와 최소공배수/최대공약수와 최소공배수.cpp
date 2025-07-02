#include <string>
#include <vector>

using namespace std;

int getGcd(int a, int b) {
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd = getGcd(n, m);
    
    long long lcm = (long long)n * m / gcd;

    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a) {
        int receivedColas = (n / a) * b;

        answer += receivedColas;

        n = (n % a) + receivedColas;
    }

    return answer;
}
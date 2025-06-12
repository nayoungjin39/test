#include <string>
#include <vector>
#include <cmath> // sqrt 함수 사용

using namespace std;

long long solution(long long n) {
    long long root = sqrt(n); // 실수 -> 정수로 내림
    if (root * root == n) {
        return (root + 1) * (root + 1);
    } else {
        return -1;
    }
}
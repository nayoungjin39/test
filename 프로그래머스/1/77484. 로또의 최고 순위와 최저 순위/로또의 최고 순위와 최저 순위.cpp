#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int zero_count = 0;        // 알아볼 수 없는 번호 개수
    int match_count = 0;       // 맞춘 번호 개수

    // 당첨 번호를 찾기 쉽게 set으로 변환 (optional: 여기선 사용하지 않음)
    for (int num : lottos) {
        if (num == 0) {
            zero_count++;
        } else if (find(win_nums.begin(), win_nums.end(), num) != win_nums.end()) {
            match_count++;
        }
    }

    // 등수 계산 함수
    auto getRank = [](int count) {
        return count >= 2 ? 7 - count : 6;
    };

    int best = getRank(match_count + zero_count);
    int worst = getRank(match_count);

    return {best, worst};
}
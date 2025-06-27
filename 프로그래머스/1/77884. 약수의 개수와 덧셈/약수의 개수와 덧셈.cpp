#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int num = left; num <= right;num++){
        int a_count = 0;
        
        for(int i= 1; i<= num; i++){
            if (num % i == 0){
                a_count++;
            }
        }
        if (a_count % 2 == 0){
            answer += num;
        }else{
            answer -= num;
        }
    }
    return answer;
}
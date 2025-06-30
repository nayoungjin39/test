#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long temp = 0;
    
    for(int i=1; i<= count; ++i)    {
        temp += (long long)price * i; 
    }
    if(money < temp) {
        return temp - money;
    }
    else{
        return 0;
    }
  }
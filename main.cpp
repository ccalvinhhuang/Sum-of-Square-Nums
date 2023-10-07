#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool judgeSquareSum(int c) {
    long l = 0;
    long h = 70000;
    while(l <= h){
        long sum = l * l + h * h;
        if(sum < c){
            l++;
        }
        else if(sum > c){
            h--;
        }
        else{
            return true;
        }
    }
    return false;
}

int main() {

}

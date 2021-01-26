#include <iostream>
using namespace std;
 
enum Index { GOOD, BAD, UNKNOWN };
 
void initNums(char** argv, int* nums, int size) {
    for(int i = 1; i < size; ++i) {
        nums[i] = atoi(argv[i]);
    }
}
 
void initMemo(Index* memo, int size) {
    for(int i = 0; i < size; ++i) {
        memo[i] = UNKNOWN;
    }
}
 
bool canJumpFromPosition(Index* memo, int position, int* nums, int size) {
    if(memo[position] != UNKNOWN) {
       return memo[position] == GOOD ? true : false;
    }
 
    int next = position + nums[position];
    int last = size - 1;
    int furthestJump = next < last ? next : last;
 
    for (int nextPosition = position + 1; nextPosition <= furthestJump; ++nextPosition) {
        if(canJumpFromPosition(memo, nextPosition, nums, size)) {
            memo[position] = GOOD;
            return true;
        }
    }
 
    memo[position] = BAD;
    return false;
}
 
bool canJump(Index* memo, int* nums, int size) {
    memo[size - 1] = GOOD;
 
    return canJumpFromPosition(memo, 0, nums, size);
}
 
int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "Invalid number of arguments" << endl;
        return 0;
    }
 
    int size = argc - 1;
 
    if (size < 1 || size > 30000) {
        cout << "Invalid size of the array" << endl;
        return 0;
    }
 
    int* nums = new int[size];
    
    initNums(argv, nums, size);
 
    Index* memo = new Index[size];
 
    initMemo(memo, size);
    
    cout << canJump(memo, nums, size) << endl;
 
    return 0;
}

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


template <typename T>
T solve(T first, T second, int c,unordered_map<int,T>&memo)
{
    auto find = memo.find(c);
    if (find != memo.end()) return memo[c];
    memo[c] = solve(first,second,c-1,memo) + solve(first,second,c-2,memo);
    return memo[c];
}
template <typename T>
T fib(T first, T second, int c)
{
    unordered_map<int,T>memo;
    memo[0]=first;
    memo[1] =second;
    return solve(first,second,c-1,memo);
}


int main()
{
    auto int_fib = fib(1,1,10);
    cout << "Int based fib 5th value is " << int_fib <<endl;

    auto float_fib = fib(1.01f,1.01f,10);
    cout << "float based fib 5th value is " << float_fib <<endl;

}
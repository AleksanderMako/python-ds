
#include<iostream>
#include<vector>
using namespace std;
template <typename TLambda>
vector<size_t> filter(vector<size_t> const & input, TLambda const & l)
{
    vector<size_t> res;
    for (auto x:input){
        if (l(x))res.push_back(x);
    }
    return res;
}
void print_vec(vector<size_t>const &v)
{
    for (auto x:v)
    {
        cout << x << " ";
    }
        cout << endl;
}
int main()
{
    // evens
    vector<size_t> t{0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    auto even_res = filter(t,[](size_t x ){return x %2 ==0;});
    print_vec(even_res);


    // odd 
    auto odd_res = filter(t,[](size_t x ){return x %2 !=0;});
    print_vec(odd_res);

    // non zero
    auto non_zero_res = filter(t,[](size_t x ){return x !=0;});
    print_vec(non_zero_res);

}
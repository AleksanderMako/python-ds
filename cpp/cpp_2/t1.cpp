#include <iostream>
#include <vector>
using namespace std;
class Person
{
public:
    string name;
    int postal_code;
    Person(string n, int pcode)
    {
        name = n;
        postal_code = pcode;
    }

    bool in_berlin()
    {
        return postal_code >= 10115 && postal_code <= 14199;
    }
};

void print_stats(vector<Person *> data)
{
    int m= INT16_MAX;
    int in =0; 
    int out =0;
    for(auto x:data )
    {
        if(x->in_berlin())
        {
            m = min(m,x->postal_code);
            in ++;
        }
    }
    cout << "Min postal code is: "<< m << endl;
    cout << "percentage of people living in Berlin is: " << (float(in)/float(data.size()))*100 <<"%" <<endl;

}

int main()
{
    vector<Person *> data;

    char c = 'y';
    string name = "";
    int pcode = 0;
    while (c == 'y')
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter post code " << endl;

        cin >> pcode;

        auto person = new Person(name, pcode);
        string where = person->name; 

        where += person->in_berlin()?" lives in berlin":" does not live in berlin";
        cout << where<<endl; 
        data.push_back(person); 
        cout << "Enter another person [y/n]" << endl; 
        cin >> c; 
    }

    print_stats(data);
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;


enum class Gender{FEMALE,MALE,UNDEFINED};
struct Person
{
    string name;
    int age;
    Gender g;

    Person(const string& n,  int a, Gender gender)
    {
        name =n; 
        age = a;
        g =gender ;
    }

    void  print();
};
void Person ::  print()
   {
       cout << name << endl;
       cout << age<< endl;
       switch (g)
       {
       case Gender::FEMALE:
           cout << "Female" << endl;
           break;
       case Gender ::MALE:
        cout << "Male" << endl;
        break; 
        case Gender:: UNDEFINED:
        cout << "Non binary" << endl;
        break;
       default:
            cout << "No gender" << endl;
           break;
       }
   }
int main()
{
    Gender g = Gender ::MALE;
    Person p ("Aleksander",23,g);
    p.print();
}
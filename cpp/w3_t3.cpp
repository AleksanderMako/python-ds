
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
    friend bool operator < (Person a,Person b)
    {
        return a.age < b.age;
    }
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

   void showPeople(vector<Person>&v)
   {
       for(auto x : v)x.print();
       cout << endl;
   }

   int main()
   {
       char y_or_n ='~';

        vector<Person>data;
        string name ="";
        int age=0;
        int gender =0;
        Gender g;
       while (y_or_n !='n')
       {
           cout << "Enter your name "<< endl; 
           cin >> name;
           cout << "Enter age" << endl; 
           cin >> age;
           cout << "Enter 1 Female, 2 Male, 3 Undefined" << endl; 
           cin >> gender;
           switch (gender)
           {
           case 1:
               g = Gender::FEMALE;
               break;
            case 2:
               g = Gender::MALE;
            break;

            case 3 :
                g = Gender::UNDEFINED;
            break;
           
           default:
               break;
           } 
           Person p(name,age,g);
           data.push_back(p);
           cout << "Continue y/n ? " << endl;
           cin >> y_or_n;
       }

       sort(data.begin(),data.end());
        showPeople(data);
       sort(data.begin(),data.end(),[](Person a, Person b){ return a.age  < b.age;});
        showPeople(data);

       sort(data.begin(),data.end(),[](Person a, Person b){ return lexicographical_compare(
           a.name.begin(),a.name.end(),b.name.begin(),b.name.end()
       );});
        showPeople(data);

   }
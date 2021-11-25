#include<iostream>

using namespace std;

int total=0;

class student 
{
    private:
        char name[20];
        int age;
        int marks;
    public:
        void input() 
        {
            cout << "Enter Name: ";
            cin >> name;
            cout << "\nEnter Age: ";
            cin >> age;
            cout << "\nEnter Marks: ";
            cin >> marks;
        }
    
        friend void add(student &t);
};

void add(student &t)
{
    total = total + t.marks;
}

int main() 
{
    student t;
    student t2;
    student t3;
    t.input();
    add(t);
    t2.input();
    add(t2);
    t3.input();
    add(t3);
    cout<<"Total Marks= "<<total;
    return 0;
}
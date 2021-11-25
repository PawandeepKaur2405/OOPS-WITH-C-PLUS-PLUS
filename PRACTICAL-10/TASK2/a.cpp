#include <iostream>

using namespace std;

class student
{
    private:
        char name[50], address[100], mobile[50];
    public:
        void get()
        {
            cout<<"Enter Name: ";
            cin.getline(name, 50);
            cout<<"Enter Address: ";
            cin.getline(address, 100);
            cout<<"Enter Mobile Number: ";
            cin.getline(mobile, 50);
        }
        void display()
        {
            cout<<"\n"<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl<<"Mobile Number: "<<mobile<<endl;
            cout<<"\n";
        }
};

int main()
{
    student s1[2], *p;
    s1[0].get();
    s1[1].get();
    p = &s1[0];
    p -> display();
    p++;
    p -> display();
    return 0;
}
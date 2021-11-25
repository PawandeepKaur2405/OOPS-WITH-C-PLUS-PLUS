#include <iostream>

using namespace std;

class student
{
    private:
        char name[50], address[100], tele[50], mobile[50], head[50];
    public:
        void get()
        {
            cout<<"Enter Name: ";
            cin.getline(name, 50);
            cout<<"Enter Address: ";
            cin.getline(address, 100);
            cout<<"Enter Telephone Number: ";
            cin.getline(tele, 50);
            cout<<"Enter Mobile Number: ";
            cin.getline(mobile, 50);
            cout<<"Mention the head of family: ";
            cin.getline(head, 50);
        }
        void display()
        {
            cout<<"\n"<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl<<"Mobile Number: "<<mobile<<endl<<"Telephone Number: "<<tele<<endl<<"Head of family: "<<endl;
            cout<<"\n";
        }
};

int main()
{
    student s1[3];
    for(int i=0;i<3;i++)
    {
        s1[i].get();
    }
    for(int i=0;i<3;i++)
    {
        s1[i].display();
    }
    return 0;
}
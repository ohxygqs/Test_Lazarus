#include <iostream>
using namespace std;

class Admin
{
public:
    void setAdmin(char Name[]);
    void setNotes(char Note[]);
    void printAdmin();

private:
    char Admin_name[20], Note[40];
};

void Admin::setAdmin(char name[20])
{
    int i=0;
    char name;
    for(i=0;i<20;i++){

        name[i]=name;
    }
}
void Admin::setNotes(char note1[])
{
    Note[] = note1;
}

void Admin::printAdmin()
{
    cout <<"Admin:"<< Admin_name << endl
        <<"Notes:"<< Note << endl;
}

int main(void)
{
    char name[20], note1[40];
    cout << "Please input your name:" << endl;
    cin >> name;
    cout << "Please input your notes:" << endl;
    cin >> note1;
    cout<<endl;

    cout<<"pls check ur infomations"<<endl;

    Admin firstAdmin;
    firstAdmin.setAdmin(name);
    firstAdmin.setNotes(note1);
    firstAdmin.printAdmin();

    getchar();
}
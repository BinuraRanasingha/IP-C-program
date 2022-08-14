#include <iostream>
using namespace std;
int main()
{
    char c_type;
    char c_name[50];
    int count;
    char result;

    for (count = 0; count <= 2; count++)
    {
        cout<<"Enter the course type:";
        cin>>c_type;

        if (c_type == 'H' || c_type == 'h')
            cout << "Diploma in Hospitality Management" << endl;


        else if (c_type == 'M' || c_type == 'm')
            cout << "Diploma in Marketing" << endl;


        else if (c_type == 'F' || c_type == 'f')
            cout << "Diploma in Finance" << endl;


        else
            cout<<"Invalid course type"<<endl;


        cout<<"Are there any more to be registered:";
        cin>>result;
        cout<<"\n";

        if (result == 'N')
        {
            break;
        }

    }
    return 0;
}
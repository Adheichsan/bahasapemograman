#include <iostream>
#include <string.h>
using namespace std;

class mahasiswa {
    public:
        string fname;
        string mname;
        string lname;
};

int main (){
    mahasiswa mhs;
    mhs.fname = "Muhammad Adhe ";
    mhs.mname = "Nur ";
    mhs.lname = "Ichsan";

    cout<<mhs.fname<<endl;
    cout<<mhs.mname<<endl;
    cout<<mhs.lname<<endl;
    cout<<mhs.fname + " " + mhs.mname + " " + mhs.lname<<endl;
    return 0;
}
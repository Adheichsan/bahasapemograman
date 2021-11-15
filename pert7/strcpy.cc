#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    char firstname [50] = "Muhammad Adhe";
    char middlename [50] = "Nur";    
    char lastname [50] = "Ichsan";
    char temp [100];
 
    //strcpy(temp, firstname);
    //strcpy(temp, middlename);
    strcpy(temp, lastname);

    strcat(strcat(temp, " "),firstname);
    // strcat(strcat(temp, " "),lastname);
    cout<<"STRCAT FUNCTION : "<<temp<<endl;
    //cout<<"STRCPY FUNCTION : "<<temp<<endl;
    cout<<strlen(temp);

    return 0;

}
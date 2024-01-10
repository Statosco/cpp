#include <iostream>
#include <fstream>
using namespace std;
#include <algorithm>  // for std::transform
#include <cctype>     // for std::tolower

class Task{
    private:
    void admin(string name, string email, string password){};
    void newUser(string name, string email, string password){};

    public:
    string loginUser(){
        cout<<"\n\n\t\t\t---------------------LOGIN PAGE---------------------\n";
        string code;
        
        cout<<"\n\n______For admins panell type in your admin code or press any character to prossed to a local account\n";
        cin>>code;

    }
    void registerUser(){
        cout<<"\n\n\t\t\t---------------------REGISTER---------------------\n";


    }

};


void mainMenu(){
    cout<<"\n\n\t\t\t---------------------M_A_I_N--M_E_N_U---------------------\n";

    Task T;
    char options;
    n:
    cout<<"_____Do you have an account with us? (n/y) -->> ";
    cin>>options;

    switch (options)
    {
    case 'y':
        T.loginUser();
        break;

    case 'n':
        T.registerUser();
        break;
    
    default:
        cout<< "you have inserted the wrong option please try again\n";
        goto n;
        break;
    };

}

string secretKey(){

}

void adminCode(){
    fstream file;

    ofstream file("secrets.txt");

    if(file.is_open()){
        file << secretKey();

        file.close();
    };
}

int main(){
    cout<<"\n\n\t\t\t---------------------W E L C O M E---------------------\n";
    adminCode();
    mainMenu();
}
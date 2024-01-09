#include <iostream>
using namespace std;
#include <algorithm>  // for std::transform
#include <cctype>     // for std::tolower

class Task{
    private:
    void admin(){};
    void newUser(){};

    public:
    void loginUser(){
        cout<<"\n\n\t\t\t---------------------LOGIN PAGE---------------------\n";
        

    }
    void registerUser(){
        cout<<"\n\n\t\t\t---------------------REGISTER---------------------\n";


    }

};

void mainMenu(){
    cout<<"\n\n\t\t\t---------------------M_A_I_N--M_E_N_U---------------------\n";

    Task T;
    int options;

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
        break;
    };

}

int main(){
    cout<<"\n\n\t\t\t---------------------W E L C O M E---------------------\n";
    mainMenu();
}
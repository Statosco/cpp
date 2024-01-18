#include <iostream>
#include <fstream>
using namespace std;
#include <algorithm>  // for std::transform
#include <cctype>     // for std::tolower
#include <random>
#include <ctime> 





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

std::string generateRandomKey() {
    int length = 9;
    // Characters allowed in the key
    const std::string allowedCharacters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    // Seed for the random number generator
    std::mt19937 generator(std::time(0));

    // Distribution to get random indices from the allowedCharacters string
    std::uniform_int_distribution<int> distribution(0, allowedCharacters.size() - 1);

    // Generate the random key
    std::string randomKey;
    for (int i = 0; i < length; ++i) {
        randomKey += allowedCharacters[distribution(generator)];
    }

    return randomKey;
}


void adminCode(){
    fstream file;

    file.open("secrets.txt", ios::in);
    
    if(file.is_open()){
        file << generateRandomKey();

        file.close();
    };
}

int main(){
    cout<<"\n\n\t\t\t---------------------W E L C O M E---------------------\n";
    adminCode();
    // mainMenu();
}
#include<iostream>
#include<fstream>

using namespace std;

class shooping{
    private:
        int pcode;
        float price;
        float dis;
        string pname;

    public:
        void menu();
        void administrator();
        void buyer();
        void add();
        void rem();
        void edit();
        void list();
        void recipt();
};

void shooping :: menu(){
    n:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t_____________________________________________\n";
    cout<<"\t\t\t\t                                             \n";
    cout<<"\t\t\t\t           Supermarket main menu             \n";
    cout<<"\t\t\t\t                                             \n";
    cout<<"\t\t\t\t_____________________________________________\n";
    cout<<"\t\t\t\t|   1) Administrator   |\n";
    cout<<"\t\t\t\t|                      |\n";
    cout<<"\t\t\t\t|   2) Buyer           |\n";
    cout<<"\t\t\t\t|                      |\n";
    cout<<"\t\t\t\t|   3) Exit            |\n";
    cout<<"\t\t\t\t|                      |\n";
    cout<<"\t\t\t\t Please select an option!";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\t\t\t Please Login \n";
        cout<<"\t\t\t Enter Email  \n";
        cin>>email;

        cout<<"\t\t\t Enter Your Password!\n";
        cin>>password;

        if(email =="admin@gmail.com" && password =="admin@123"){
            administrator();
        }else{
            cout<<"Invalid Email or Password";
        }

        break;
    
    case 2:
        {
            buyer();
            break;
        }
    case 3:
    {
        exit(0);
        break;
    }
    
    default:{
        cout<<"Please select from the given option";
        goto n;
        }
    }
}

void shooping :: administrator(){
    no:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator menu\n";
    cout<<"|                                   |";
    cout<<"\n\t\t\t|_____1) Add the product____|";
    cout<<"|                                   |";
    cout<<"\n\t\t\t|_____2) Delete  product____|";
    cout<<"|                                   |";
    cout<<"\n\t\t\t|_____3) Back to main menu__|";

    cout<<"\n\n\t Please enter your choice";
    cin>>choice;

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
    default:
    cout<<"Invalid choice!";
    goto no;
    }
}
void shooping:: buyer(){
    noo:
    int choice;
    cout<<"\t\t\t\t Buyer  \n";
    cout<<"\t\t\t___________________";
    cout<<"                       \n";
    cout<<"\t\t\t 1) Buy product  \n";
    cout<<"                       \n";
    cout<<"\t\t\t 2) go back      \n";
    cout<<"\t\t\tEnter your choice\n";

    cin>>choice;

    switch (choice)
    {
    case 1:
        recipt();
        break;
    case 2:
        menu();
    default:
        cout<<"invalid choice";
        goto noo;
    }

}

void shooping:: add(){
    fstream data;

    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<"\n\n\t\t\t Add new product";
    cout<<"\n\n\t Product code";
    cin>>pcode;
    cout<<"\n\n\tName of product ";
    cin>>pname;
    cout<<"\n\n\tPrice of the product";
    cin>>price;
    cout<<"\n\n\t Discount on product";
    cin>>dis;
}
#include<iostream>
using namespace std;
class account{
private:    
    string account_number, first_name, last_name;
    double balance;
public:    
    void show();
    void search();
    void delete_account();
    void quit();
    void initialize();
    void new_account();
    void update();
};
void account::show(){
    cout<<"Enter your account number: ";
    cin>>account_number;
    cout<<"Enter your first name linked with the account: ";
    cin>>first_name;
    cout<<"Enter your last name linked with the account: ";
    cin>>last_name;
    //complete it later
    
}
void account::search(){
    cout<<"Enter your account number: ";
    cin>>account_number;
}
void account::delete_account(){
    cout<<"Enter your account number: ";
    cin>>account_number;
}
void account::quit(){
    return;
}
void account::new_account(){
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<"Enter your last name: ";
    cin>>last_name;
}
void account::update(){
    cout<<"Enter your account number: ";
    cin>>account_number;
    cout<<"Enter your first name linked with the account: ";
    cin>>first_name;
    cout<<"Enter your last name linked with the account: ";
    cin>>last_name;
}
void account::initialize(){
    int choice;
    cout<<"Account Information System\n"<<"Select from the options below\n";
    cout<<"1. Add a new record\n"<<"2. Show existing record\n"<<"3. Search record\n"<<"4. Update existing record\n"<<"5. Delete Record\n"<<"6. Quit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1: new_account(); break;
        case 2: show(); break;
        case 3: search(); break;
        case 4: update(); break;
        case 5: delete_account(); break;
        case 6: quit(); break;
        default: cout<<"Enter a valid choice\n";
    }

}

int main(){
    account a;
    a.initialize();
    return 0;
}
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class lrsystem //lrsystem=login & registeration system
{
    private:
    string username;
    string password;
    public:
    void registerUser();
    void loginUser();
};
void lrsystem::registerUser()
{
    bool usernamevalid=true;
    cout<<"Enter Your username:\n";
    cin>>username;
    if(username.empty())
        {
            cout<<"Invalid Username. "<<"\n";
            usernamevalid=false;
        }
        else
        {
        
            for(int i=0;i<username.length();i++)
                {
                    if((username.at(i)>='a'  && username.at(i)<='z') || (username.at(i)>='A' && username.at(i)<='Z') || (username.at(i)>='0' && username.at(i)<='9'))
                    {
                    continue;
                    }
                    else
                    {
                        cout<<"Invalid username:Don't use special character.";
                        usernamevalid=false;
                        break;
                    }
                }
            
        }
    
    cout<<"\n";
    if(usernamevalid==true)
    {
    cout<<"Enter Your password:\n";
    cin>>password;
    if(password.empty())
    {
        cout<<"Invalid Password."<<endl;
    
    }
    else if(password.length()<8)
    {
        cout<<"Invalid Password:Password must contain atleast 8 character.";
    
    }
    else 
    {
        for(int i=0;i<password.length();i++)
                {
                    if((password.at(i)>='a'  && password.at(i)<='z') || (password.at(i)>='A' && password.at(i)<='Z') || (password.at(i)>='0' && password.at(i)<='9') || (password.at(i)=='!' || password.at(i)=='@' || password.at(i)=='#' || password.at(i)=='$' || password.at(i)=='%' || password.at(i)=='^' || password.at(i)=='&' || password.at(i)=='_' || password.at(i)=='-' || password.at(i)=='*' ))
                    {
                    continue;
                    }
                    else
                    {
                        cout<<"Invalid Password";
                        break;

                    }

                }
                cout<<"Registration successful.";
    }
    ofstream fout;
    fout.open("credential.txt",ios::app);
    fout<<username<<" ";
    fout<< password<<endl;
    fout<<"\n";
    fout.close();


} 
}
void lrsystem::loginUser()
{
    string u, p;
    bool found = false;

    cout << "Enter username: ";
    cin >> u;
    cout << "Enter password: ";
    cin >> p;

    ifstream fin("credential.txt");

    while(fin >> username >> password)
    {
        if(u == username && p == password)
        {
            found = true;
            break;
        }
    }

    fin.close();

    if(found)
        cout << "Login successful!" << endl;
    else
        cout << "Invalid username or password." << endl;
}

int main()
{
    lrsystem user;
    int choice;
   cout << "===== LOGIN & REGISTRATION SYSTEM =====\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            user.registerUser();
            break;

        case 2:
            user.loginUser();
            break;

        case 3:
            cout << "Thank you! Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
    }



}
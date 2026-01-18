#include<iostream>
#include<string>
using namespace std;
class lrsystem //lrsystem=login & registeration system
{
    private:
    string username;
    string password;
    public:
    void registerUser();
    //void loginUser();
};
void lrsystem::registerUser()
{
    string usernamevalid=true;
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
                cout<<"Password accepted";
    }

} 
}
int main()
{
    lrsystem a;
    a.registerUser();
    return 0;
}
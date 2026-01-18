#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class lrsystem // lrsystem=login & registeration system
{
private:
    string username;
    string password;

public:
    void registerUser();
    void loginUser();
    bool userExists(string uname);
};
void lrsystem::registerUser()
{
    cout << "Enter Your username:\n";
    bool Isvalid = true;
    cin >> username;
    if (username.empty())
    {
        cout << "Invalid Username. " << "\n";
        Isvalid = false;
    }
    else
    {

        for (int i = 0; i < username.length(); i++)
        {
            if ((username.at(i) >= 'a' && username.at(i) <= 'z') || (username.at(i) >= 'A' && username.at(i) <= 'Z') || (username.at(i) >= '0' && username.at(i) <= '9'))
            {
                continue;
            }
            else
            {
                cout << "Invalid username:Don't use special character.";
                Isvalid = false;
                break;
            }
        }
    }

    cout << "\n";
    if (Isvalid)
    {
        if (userExists(username))
        {
            cout << "Username already exists. Try another.\n";
            return;
        }
    }

    if (Isvalid == true)
    {
        cout << "Enter Your password:\n";
        cin >> password;
        if (password.empty())
        {
            cout << "Invalid Password." << endl;
            Isvalid = false;
        }
        else if (password.length() < 8)
        {
            cout << "Invalid Password:Password must contain atleast 8 character.";
            Isvalid = false;
        }
        else
        {
            for (int i = 0; i < password.length(); i++)
            {
                if ((password.at(i) >= 'a' && password.at(i) <= 'z') || (password.at(i) >= 'A' && password.at(i) <= 'Z') || (password.at(i) >= '0' && password.at(i) <= '9') || (password.at(i) == '!' || password.at(i) == '@' || password.at(i) == '#' || password.at(i) == '$' || password.at(i) == '%' || password.at(i) == '^' || password.at(i) == '&' || password.at(i) == '_' || password.at(i) == '-' || password.at(i) == '*'))
                {
                    continue;
                }
                else
                {
                    cout << "Invalid Password";
                    Isvalid = false;
                    break;
                }
            }
        }
        if (Isvalid == true)
        {
            ofstream fout;
            fout.open("credential.txt", ios::app);
            fout << username << " ";
            fout << password << endl;
            fout.close();
            cout << "Registration successful.\n";
        }
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

    while (fin >> username >> password)
    {
        if (u == username && p == password)
        {
            found = true;
            break;
        }
    }

    fin.close();

    if (found)
        cout << "Login successful!" << endl;
    else
        cout << "Invalid username or password." << endl;
}
bool lrsystem::userExists(string uname)
{
    ifstream fin("credential.txt");
    string u, p;

    while (fin >> u >> p)
    {
        if (u == uname)
        {
            fin.close();
            return true;
        }
    }

    fin.close();
    return false;
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

    switch (choice)
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
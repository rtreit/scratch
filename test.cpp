#include <iomanip>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

    system("color f0");

    cout << setw(70);
    cout << "Welcome user! please sign-in." << endl;
    cout << endl;

    string username;
    cout << "Username: ";
    cin >> username;

    string password;
    cout << "Password: ";
    cin >> password;

    system("CLS");
    if (username == "Clint")
    {

        if (password == "101009")
        {

            cout << endl;
            cout << endl;
            cout << setw(65);
            cout << "Welcome Clint!";
            cout << endl;
            cout << endl;
            cout.flush();
            Sleep(2000);
            system("CLS");

            string app;
            cout << "Hello! What is the first letter of the app you want the sign-in info for? ";
            cin >> app;
            system("CLS");
            if (app == "Google")
            {
                string google_password = "mysupersecretgooglepassword!123";
                cout << "Your Google password is: " + google_password;
            }
            else
            {
                cout << "I'm sorry Clint, I don't seem to have that account information.";
            }
        }
    }

    else
    {

        cout << "your not Clint!";

        return 0;
    }
}

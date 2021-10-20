/* Fernando Ramírez González & Joshelyn Yanori Mendoza Alfaro
 *  19/10/2021
 */
#ifndef TRACK_USER_H
#define TRACK_USER_H
#ifndef PROYECTODECOMPUTACION_USUARIO_H
#define PROYECTODECOMPUTACION_USUARIO_H
#include "PriceTracker.h"
#include <fstream>
using namespace std;
class User{
public:
//Definition of control system
string registerUs() {
    ofstream Save;
    if (Status == "new"){
        Save.open("Fichero.txt", ios::app);
        cout << "Enter your username" ;
        cin >> registeredusername;
        cout << "Enter your password: ";
        cin >> registeredpassword;
        Save << registeredusername << " " << registeredpassword;
        Read.close();
        return "Thanks for your answer";
    }
    else if (Status == "old"){
        Read.open("Fichero.txt");
        Read >> registeredusername;
        bool found = false;
        cout << "Please enter your password: ";
        cin >> password;
        while (!Read.eof()){
            Read >> registeredpassword;
            if (registeredpassword == password){
                found = true;
                cout << "Your username and password exist, please continue.";
                return "Please continue";
                }
            else if(found == false){
                cout << "The password does not correspond to this user :(";
                break;
                return 0;
                }
            Read.close();
        }
    }
    }
string userStatus(){
    cout << "Please enter your user status new or old user: ";
    cin >> Status;
    return "Thanks for confirming your status";
}
private:
//Save password as a characteristic of the object username
    string password;
    string Status;
    string registeredusername;
    string registeredpassword;
    ofstream Save;
    ifstream Read;
};


#endif //PROYECTODECOMPUTACION_USUARIO_H
#endif //TRACK_USER_H
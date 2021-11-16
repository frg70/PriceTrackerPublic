/* Fernando Ramírez González & Joshelyn Yanori Mendoza Alfaro
 *  19/10/2021
 *  fer.ramirez.gon@gmail.com
 */
#include "User.h"
#include <string>
//User register system section
//User constructor
using namespace std;
User master;
string User::getRegisteredUser() {
    return registeredusername;}
string User::getRegisteredPassword() {
    return registeredpassword;}
//Establishing the status of the user
string User::setUserStatus() {
    cout << "Please enter your user status new or old user: ";
    cin >> Status;
    return "Thanks for confirming your status";}
//To retrieve the status
string User::getUserStatus() {
    return Status;}

string User::getUserAccessStatus() {
    return AccessStatus;}
//This system is for registering a new user
string User::registerSystem() {
    ofstream Save;
    string answer;
    int code = 303;
    Save.open("Fichero.txt", ios::app);
    cout << "Welcome to the user register system" << endl;
    try {
        cout << "Would you like to register?, please type yes or no." << endl;
        cin >> answer;
        if (answer == "yes") {
            cout << "Enter your username" << endl;
            cin >> registeredusername;
            cout << "Enter your password: " << endl;
            cin >> registeredpassword;
            Save << registeredusername << " " << registeredpassword;
            Read.close();
            cout << "Thanks for your answer";
        } else if (answer == "no") {
            cout << "Thanks for using our system, you can continue without registering";
        }
        else{
            cout<< "Try again";
        }
    }
    catch (string &answer) {
        cout << "Error 1; register command no accepted, please try again";
    }
    return " ";
}
// Access system
string User::accesSystem() {
    ofstream Save;
    string username, password;
    try {
        if (Status == "new"){
            cout << "Please register  usign our system.";
            cout << master.registerSystem();}
        else if (Status == "old"){
            Read.open("Fichero.txt");
            Read >> registeredusername;
            Read >> registeredpassword;
            bool found1 = false, found2 = false;
            cout << "Please enter your username";
            cin >> username;
            cout << "Please enter your password: ";
            cin >> password;
            while (!Read.eof()){
                Read >> registeredusername;
                Read >> registeredpassword;
                if (registeredusername == username){
                    found1 = true;
                    cout << "Your username exists";
                    return "Please continue";
                }
                else if (registeredpassword == password){
                    found2 = true;
                }
                if (found1 == true, found2 == true){
                   cout << "Both your password and user name exist please continue.";}
    }
    }
        }
    catch (string password){
        cout << "Error 404 your password or username was not found";
    }
        Read.close();
    return 0;
}
//User menu section



//Object method section
int User::addtoWachlist(Article object) {
    string answer;
    cout << "Would you like to add this object into your watchlist?" << endl;
    cout << "Please answer with yes or no" << endl;
    cin >> answer;
    try {
        if (answer == "yes") {
            options.push_back(object);
            cout << "Your object has been succesfully added" << endl;
        } else if (answer == "no") {
            cout << "Thanks for your search, hope to see you soon";
        }
    } catch (string &answer) {
        cout << "Error 404 your answer has not been found, please enter yes or no. ";
    }
    return 0;
}




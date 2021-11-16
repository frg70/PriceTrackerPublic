/* Fernando Ramírez González & Joshelyn Yanori Mendoza Alfaro
 *  19/10/2021
 *  fer.ramirez.gon@gmail.com
 */
#include "User.h"
User master("LABGEDV8647.", "frg");
//User register system section
//User constructor
User::User(string password, string username) {
    registeredpassword = password;
    registeredusername = username;}
//Establishing the status of the user
string User::setUserStatus() {
    cout << "Please enter your user status new or old user: ";
    cin >> Status;
    return "Thanks for confirming your status";}
//To retrieve the status
string User::getUserStatus() {
    return Status;}
//This system is for registering a new user
void User::registerSystem() {
    ofstream Save;
    string answer;
    Save.open("Fichero.txt", ios::app);
    cout << "Welcome to the user register system" << endl;
    cout << "Would you like to register?, please type yes or no." << endl;
    cin >> answer;
    try {
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
    } catch (string answer) {
        cout << "Error 1; register commando no accepted, please try again";
        master.creatingUser(registeredpassword,registeredusername);
    }
}

void User::creatingUser(string username, string password) {
    User usuario(username, password);
}

// Access system
string User::accesSystem() {
    ofstream Save;
    string username, password;
    try {
        if (Status == "new"){
            cout << "Please enter register using our registering system.";
            master.registerSystem();}
        else if (Status == "old"){
            Read.open("Fichero.txt");
            Read >> registeredusername;
            Read >> registeredpassword;
            bool found = false;
            cout << "Please enter your username";
            cin >> username;
            cout << "Please enter your password: ";
            cin >> password;
            while (!Read.eof()){
                Read >> registeredusername;
                Read >> registeredpassword;
                if (registeredusername == username){
                    found = true;
                    cout << "Your username exists";
                    return "Please continue";
                }
                else if (registeredpassword == password){
                    found = true;
                    cout << "Your username and password exist, please continue.";
                    return "Please continue";
                }
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
void User::addtoWachlist(Article object) {
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
    } catch (string answer) {
        cout << "Error 404 your answer has not been found, please enter yes or no. ";
    }
}




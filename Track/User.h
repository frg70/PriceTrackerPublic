/* Fernando Ramírez González & Joshelyn Yanori Mendoza Alfaro
 *  19/10/2021
 *  fer.ramirez.gon@gmail.com
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
User(string, string);
//Definition of control system
void registerSystem();
string getUserStatus();
string setUserStatus();
string accesSystem();
void addtoWachlist(Article object);
void creatingUser(string, string);
private:
//Save password as a characteristic of the object username
    string Status;
    ofstream Save;
    ifstream Read;
    string registeredusername;
    string registeredpassword;
    vector<Article> options;
};
class NewUser : public User{
public:


};

#endif //PROYECTODECOMPUTACION_USUARIO_H
#endif //TRACK_USER_H
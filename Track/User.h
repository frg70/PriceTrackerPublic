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
//Definition of control system
string registerSystem();
string getUserStatus();
string setUserStatus();
string accesSystem();
string getUserAccessStatus();
int addtoWachlist(Article object);
string getRegisteredPassword();
string getRegisteredUser();
void readCSV();
private:
//Save password as a characteristic of the object username
    string Status;
    ofstream Save;
    ifstream Read;
    string registeredusername;
    string registeredpassword;
    string AccessStatus;
    vector<Article> options;
};

#endif //PROYECTODECOMPUTACION_USUARIO_H
#endif //TRACK_USER_H
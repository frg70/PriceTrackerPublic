/* Alfaro Mendoza Joshelyn Yanori & Fernando Ramírez González
 * fer.ramirez.gon@gmail.com
 *  16/10/2021
 */
#ifndef TRACK_PRICETRACKER_H
#define TRACK_PRICETRACKER_H
#include <iostream>
//Definition of variables and characteristics of class article
using namespace std;
class Article{
public:
    string name;
    string URL;
    double price;
    double getPrice(){
        return price;}
    string getURL(){
        return URL;}
    string getname(){
        return name;}
    int productNumber;
};






#endif //TRACK_PRICETRACKER_H
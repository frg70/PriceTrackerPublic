/* Alfaro Mendoza Joshelyn Yanori & Fernando Ramírez González
 * fer.ramirez.gon@gmail.com
 *  16/10/2021
 */
#ifndef TRACK_PRICETRACKER_H
#define TRACK_PRICETRACKER_H
#include <iostream>
#include <vector>
//Definition of variables and characteristics of class article
using namespace std;
class Article{
public:
    Article(string nombre, double precio , int codigoProducto, string url){
        name = nombre;
        price = precio;
        productNumber = codigoProducto;
        URL = url;}
    string getPrice(){
        return price;}
    string getURL(){
        return URL;}
    string getname(){
        return name;}
private:
    string name;
    string URL;
    string price;
    int productNumber;
    string deliveryDate;
};






#endif //TRACK_PRICETRACKER_H
/* Joshelyn Yanori Mendoza Alfaro & Fernando Ramírez González
 *  19/10/2021
 */
#include "PriceTracker.h"
#include "User.h"
#include <vector>
#include <iostream>
//Definition of variables and functions for main
vector<Article> options; //This variable is for the control system in the future
int EnterOption();
int option;
int productNumber;
string store;
string setStore(string store);
int setProductnumber();
int main() {
    User usuario;
    //Access control system
    cout << usuario.userStatus()<< endl;
    cout << usuario.registerUs()<< endl;
    //Definition of objects and attributes of class article
    Article telescopeA;
    telescopeA.URL = "https://www.amazon.com/Celestron-31042-AstroMaster-Reflector-Telescope/dp/B000MLL6R8/ref=sr_1_18?crid=HZ052N5IUNL6&dchild=1&keywords=telescopio+newtoniano&qid=1634492229&sr=8-18";
    telescopeA.price = 7370.36;
    telescopeA.name = "Celestron 21062 AstroMaster Telescopio refractor 70 EQ ";
    telescopeA.productNumber = 1;
    Article telescopeML;
    telescopeML.URL = "https://articulo.mercadolibre.com.mx/MLM-860743866-telescopio-celestron-astromaster-114eq-reflector-msi-_JM#position=7&search_layout=stack&type=item&tracking_id=c9a41658-ba8f-4821-b3de-ca684b6f75ab";;
    telescopeML.price = 12799;
    telescopeML.name = "Telescopio Celestron Astromaster 114eq Reflector Msi";
    telescopeML.productNumber =1;
    //Vector for the access in control system, not available now :(
    Article CameraA;
    CameraA.URL = "https://www.amazon.com.mx/Wyze-Cam-1080p-Interiores-Exteriores/dp/B08R59YH7W/ref=pd_rhf_ee_s_pd_crcd_44/130-0360803-7901034?pd_rd_w=0gz2j&pf_rd_p=9962b3ae-bf60-4229-a03d-58ca73a9c196&pf_rd_r=FVDKHARF5P9ZYFH0SA7V&pd_rd_r=d79dbfd2-026c-46fe-953e-ff808055c8fe&pd_rd_wg=q4Eni&pd_rd_i=B08R59YH7W&th=1";
    CameraA.price = 1079.00;
    CameraA.name = "Wyze Cam v3 1080p HD";
    CameraA.productNumber = 2;
    Article CameraML;
    CameraML.URL = "https://articulo.mercadolibre.com.mx/MLM-929383743-wyze-cam-v3-1080p-hd-camara-de-video-para-interiorespara-_JM#position=2&search_layout=grid&type=item&tracking_id=3a8bbbaf-b44a-4c7a-b024-78a396dfb87a";
    CameraML.price = 1742.74;
    CameraML.name = "Wyze Cam V3 1080p Hd Camara De Video Para Interiores/para";
    CameraML.productNumber = 2;
    Article EchoA;
    EchoA.URL = "https://www.amazon.com.mx/Staging-Product-Not-Retail-Sale/dp/B084DCJKSL/ref=zg-bs_amazon-devices_10/130-0360803-7901034?pd_rd_w=u0yav&pf_rd_p=16c6ce41-17c3-40da-bc4f-e2b032bf4f0f&pf_rd_r=AVSGKBGK6033BNGYXX5K&pd_rd_r=18ebec22-8fc9-497f-aaac-a69e843823b8&pd_rd_wg=U8Yh5&pd_rd_i=B084DCJKSL&psc=";
    EchoA.price = 3999.00;
    EchoA.name = "Nuevo Echo Show 8 (2da Generacion)";
    EchoA.productNumber = 3;
    Article EchoML;
    EchoML.URL = "https://articulo.mercadolibre.com.mx/MLM-1302475270-nuevo-echo-show-8-2da-generacion-2021-envio-gratis-_JM?searchVariation=173561552751#searchVariation=173561552751&position=2&search_layout=stack&type=item&tracking_id=86fb51a6-d097-4a37-81c0-2ab2e8d6e895";
    EchoML.price = 3099.00;
    EchoML.name = "Nuevo Echo Show 8 (2da generacion, edición 2021) - Pantalla inteligente HD con Alexa y camara de 13 MP - Negro ";
    EchoML.productNumber = 3;
    option = EnterOption();
    productNumber = setProductnumber();
    //Selection of cases
    cout << "The select your store, Amazon or MercadoLibre";
    cin >> store;
    switch (option) {
        case 1:
            if (store == "Amazon" and productNumber == 1){
                cout << "You have selected Telescope."<< endl;
                cout << "This is the name of your product: " << telescopeA.getname() << endl;
                cout << "The price in Amazon is of: " << telescopeA.getPrice() << endl;
                cout << "Here you can find the URL: " << telescopeA.getURL() << endl;
                options.push_back(telescopeA);
            }
           else if (store == "MercadoLibre" and productNumber == 1){
               cout << "You have selected Telescope."<< endl;
               cout << "This is the name of your product: " << telescopeML.getname() << endl;
               cout << "The price in Mercado Libre is of: " << telescopeML.getPrice() << endl;
               cout << "Here ypu can find the URL: " << telescopeML.getURL() << endl;
           options.push_back(telescopeML);
           }
        case 2:
            if (store == "Amazon" and productNumber == 2){
                cout << "You have selected the Wyze Camera."<< endl;
                cout << "This is the name of your product: " << CameraA.getname() << endl;
                cout << "The price in Amazon is of: " << CameraA.getPrice() << endl;
                cout << "Here you can find the URL: " << CameraA.getURL() << endl;
            options.push_back(CameraA);
            }
            else if (store == "MercadoLibre" and productNumber ==2){
                cout << "You have selected the Wyze Camera."<< endl;
                cout << "This is the name of your product: " << CameraML.getname() << endl;
                cout << "The price in Mercado Libre is of: " << CameraML.getPrice() << endl;
                cout << "Here ypu can find the URL: " << CameraML.getURL() << endl;
            options.push_back(CameraML);
            }
        case 3:
            if (store == "Amazon" and  productNumber ==3){
                cout << "You have selected the Echo Tablet.";
                cout << "This is the name of your product: " << EchoA.getname() << endl;
                cout << "The price in Amazon is of: " << EchoA.getPrice() << endl;
                cout<< "Here you can find the URL: " << EchoA.getURL() << endl;
            options.push_back(EchoA);
            }
            else if (store == "MercadoLibre" and productNumber == 3){
                cout << "You have selected the Echo Tablet.";
                cout << "This is the name of your product: " << EchoML.getname() << endl;
                cout << "The price in Mercado Libre is of: " << EchoML.getPrice() << endl;
                cout << "Here ypu can find the URL: " << EchoML.getURL() << endl;
            options.push_back(EchoML);
            }
       }
    return 0;
}
//Definition of article selector
int EnterOption() {
    {
        int op;
        do {
            cout << "Select your objetct, enter 1 for Telescope, enter 2 for the Wyze camera; and enter 3 for the Echo Tablet: ";
            cin >> op;
        } while (op != 1 && op != 2 && op != 3);
        return op;
    }
}
string setStore(){
    cout << "Please select your store";
    if ( store == "Amazon" or store == "Mercado Libre"){
        cin >> store;
        return "Thanks for entering your store";
    }
    else {
        return "Your store is not available now, we are working on it.";
    }

}
int setProductnumber(){
    cout << "Please your product number, 1 for Telescope, 2 for Camera, 3 for Tablet";
    cin >> productNumber;
    return productNumber;}







import requests
from bs4 import BeautifulSoup
import pandas as pd
import time
#Amazon Telescope
def PriceTrackTelescopeAmazon():
    URL = "https://www.amazon.com/Celestron-31042-AstroMaster-Reflector-Telescope/dp/B000MLL6R8/ref=sr_1_18?crid=HZ052N5IUNL6&dchild=1&keywords=telescopio+newtoniano&qid=1634492229&sr=8-18"
    headers = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:93.0) Gecko/20100101 Firefox/93.0"
    page = requests.get(URL, headers=headers)
    soup = BeautifulSoup(page.content, "html.parser")
    title = soup.find(id="productTitle").get_text()
    price = soup.find(id="priceInsideBuyBox_feature_div").get_text()
    convertedPrice = float(price[0:5])
    Amazon = {"Title": title, "Price": convertedPrice, "Product Number:":1}
    return Amazon
TelescopeList = []
#Mercado Libre Telescope
def PriceTrackTelescopeMercadolibre():
    URL = "https://articulo.mercadolibre.com.mx/MLM-860743866-telescopio-celestron-astromaster-114eq-reflector-msi-_JM#position=7&search_layout=stack&type=item&tracking_id=c9a41658-ba8f-4821-b3de-ca684b6f75ab"
    headers = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:93.0) Gecko/20100101 Firefox/93.0"
    page = requests.get(URL, headers=headers)
    soup = BeautifulSoup(page.content, "html.parser")
    return soup
def Transform(soup):
    divs = soup.find_all("div", class_="ui-pdp-container__row ui-pdp-component-list pr-16 pl-16")
    for item in divs:
        title = item.find("div", class_="ui-pdp-titler").get_text()
        price = item.find("div", class_="price-tag-fraction")
        MercadoLibre = { "Title": title,"Price": price, "Product Number:": 1}
    return MercadoLibre
def Append(Amazon,MercadoLibre):
    TelescopeList.append(Amazon,MercadoLibre)
    df = pd.DataFrame(TelescopeList)
    return df




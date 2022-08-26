class Book:
    def __init__(self,name,author):
        self.name = name
        self.author = author
        self.price = 0


    #update book price
    def set_price(self,price):
        self.price = price
    #get price
    def get_price(self):
        return self.price

    #ger details
    def details(self):
        print("Book Name:",self.name,
              "\nAuthor:",self.author,
              "\nPrice:",self.price)

#======== call from another class==> class_4_test.py
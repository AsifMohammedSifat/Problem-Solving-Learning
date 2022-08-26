'''
How to import a class?
ans:
 if(same folder)
    from folder_name import class_name
 else
    import class_name
'''


from OOP import class_4
#from OOP.class_4 import Book

#creating book object

book1 = class_4.Book("Hisnul Muslim","Asif")

book1.set_price("250/- only\n")
print("Price:",book1.get_price())
book1.details()
class Father:
    def __init__(self):
        print("__init__ from class Father")
    def method(self):
            print("Method of class Father")
class Mother:
    def __init__(self):
        print("__init__ from class Mother")

    def method(self):
        print("Method of class Father")

class child(Father,Mother):
    def __init__(self):
        super().__init__()
        Mother.__init__(self)
        print("__init__ from class child")

    def method1(self):
        print("Method of class Father")

obChild = child()
obChild.method1() #it will call Father because most priority is Father (Father-> Mother)

Mother.method(obChild) #if we call by Parent class reference,then must be send child class reference in parenthesses.
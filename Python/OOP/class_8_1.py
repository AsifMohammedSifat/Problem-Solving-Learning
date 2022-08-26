'''
Example of Multi Level Inheritance.
'''

class parentClass:
    def display1(self):
        print("I am from parent class")
class childClass(parentClass):
    def display2(self):
        print("I am from child class-1")
class childClass_1(childClass):
    def display3(self):
        super().display1() #super() used to access                               parent class method
        print("I am from child class-2")

ob = childClass_1()

ob.display1()
ob.display2()
ob.display3()



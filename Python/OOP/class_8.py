'''
Example of single Inheritance.
'''

class parentClass:
    def display1(self):
        print("I am from parent class")
class childClass(parentClass):
    def display2(self):
        print("I am from child class-1")

ob = childClass()

ob.display1()
ob.display2()


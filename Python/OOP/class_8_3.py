'''
Example of Multiple Inheritance.
'''

class parentClass_1:
    def display1(self):
        print("I am from parent class 1")
class parentClass_2():
    def display2(self):
        print("I am from parent class 2")
class childClass(parentClass_1,parentClass_2):
    def display3(self):
        print("I am from child class-2")

ob_1 = childClass()

ob_1.display1()
ob_1.display2()
ob_1.display3()




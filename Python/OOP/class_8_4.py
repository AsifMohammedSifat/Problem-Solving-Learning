'''
Example of Hybrid Inheritance.
'''

class parentClass_1:
    def display1(self):
        print("I am from parent class 1")
class childClass_2(parentClass_1):
    def display2(self):
        print("I am from parent class 2")
class childClass_3(childClass_2):
    def display3(self):
        print("I am from child class-2")
class childClass_4(parentClass_1):

    def display3(self):
        print("I am from child class-2")


ob_childClass_4 = childClass_4()
ob_childClass_4.display1()
ob_childClass_4.display3()

ob_childClass_3 = childClass_3()
ob_childClass_3.display2()
ob_childClass_3.display3()






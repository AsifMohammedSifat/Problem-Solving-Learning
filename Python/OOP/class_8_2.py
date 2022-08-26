'''
Example of Hierarchical Inheritance.
'''

class parentClass:
    def display1(self):
        print("I am from parent class")
class childClass_1(parentClass):
    def display2(self):
        print("I am from child class-1")
class childClass_2(parentClass):
    def display3(self):
        print("I am from child class-2")

ob_1 = childClass_1()
ob_2 = childClass_2()

ob_1.display1()
ob_1.display2()

ob_2.display1()
ob_2.display3()



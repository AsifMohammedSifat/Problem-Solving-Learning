'''
    Example of Single Inheritance.
'''

class Animal:
    def __init__(self,name):
        self.name = name
    def eat(self):
        print(self.name,"is eating")

class Dog(Animal):
    def bark(self):
        print(self.name,"is barking")

ob1 = Animal("JER")
ob2 = Dog("Tom")

ob1.eat()
ob2.bark()

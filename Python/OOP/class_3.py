'''
 How to reduce code from class_2.py?
 How to define instance method?
 How to call instance method?
'''

#class templete
class student():
    def __init__(self,name,age):
        self.name = name
        self.age = age
        print("from inside of the class ",name,age)

    def display(self): #this is an instance method
        print("Name:",self.name,"Age:",self.age )


s1 = student("Asif",25)
s2 = student("Sifat",27)

s1.display() #instance method must be called by object reference
s2.display()

print(s1.__dict__)

#dir() built in function. which return all attribute and
#function of object
print(dir(s1))




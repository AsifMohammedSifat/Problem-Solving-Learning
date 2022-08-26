'''
 How to pass parameter to class?
 How to access instance variable?
 How to update an object?
'''

#class templete
class student():
    def __init__(self,name,age):
        self.name = name
        self.age = age
        print("from inside of the class ",name,age)

per1 = student("rahim",25)
per2 = student("karim",27)

#instance varible there must be needed object reference=> per.name /object.instance variable
print("From outside of class ",per1.name,per1.age)
print("From outside of class ",per2.name,per2.age)

print("================How to update object========================")

#update object
print("Previous age of per1 is ",per1.age)
per1.age = 27
print("updated age of per1 is", per1.age)

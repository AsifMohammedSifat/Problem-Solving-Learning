'''
    Example of Multi-Level Inheritance.
'''
class student:                  #grant parent
    def __init__(self,name,id):
        self.name = name
        self.id = id
    def display(self):
        print("Name=",self.name,"ID=",self.id,"\n")


class cseStudent(student):           #parent
    def __init__(self,name,id,labs):
        super().__init__(name,id)
        self.labs = labs
    def talk(self):
        print("Hello,I am",self.name,".","My id is",self.id,"and I have completed",self.labs,"labs.\n")


class cseFresher(cseStudent):        #child
    def isEnroll(self):
        print(self.name," has enrolled successfully\n")

ob_old = cseStudent("Asif",25,27)
ob_new = cseFresher("Sifat",52,0)

ob_new.display()
ob_old.talk()
ob_new.isEnroll()


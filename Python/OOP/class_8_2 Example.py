'''
    Example of Hierachical Inheritance.
'''
class student:                  #grant parent
    def __init__(self,name,id):
        self.name = name
        self.id = id
    def display(self):
        print("Name=",self.name,"ID=",self.id,"\n")


class cseStudent(student):           #child
    def __init__(self,name,id,labs):
        super().__init__(name,id)
        self.labs = labs
    def display(self):
        print("Name=", self.name, "ID=", self.id,"Labs:",self.labs,"\n")


class  bbaStudent(student):        #child
    def party(self):
        print(self.name," all day realxing\n")

ob_cse = cseStudent("Asif",25,15)
ob_bba = bbaStudent("shihab",25)

ob_cse.display()
ob_bba.display()


'''
How pass by value and pass by reference?
'''

class animal:
    def __init__(self,name,behaviour):
        self.name = name
        self.behaviour =behaviour
    def test(self,num,list):
        num = num + 10
        list1 = list
        list1[0] = "yellow"
        print(num)
        print(list1)

cat1 = animal("tom","good")

num = 75
list_color = ["green","orange"]
cat1.test(num,list_color) #num pass its value
                          #list_color pass its reference

#outside of method
print(num,"\n")
print(list_color)


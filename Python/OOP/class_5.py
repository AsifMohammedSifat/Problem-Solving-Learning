'''
How to create compare() function?
Pass by reference method
'''


class Compare:
    def __init__(self,name,behaviour):
        self.name = name
        self.behaviour =behaviour
    def compare(self,object):
        if(self.behaviour == object.behaviour):
            return ("Both object are same")
        else:
            return ("both are not same")


cat1 = Compare("tom","good")
cat2 = Compare("jerry","bad")

result = cat1.compare(cat2)
print(result)

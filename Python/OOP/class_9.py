from abc import ABC, abstractmethod

class food(ABC):
    @abstractmethod
    def taste(self):
        pass
class mangoes(food):#inherit food abstract class
    def taste(self):  #override of abstract class method.
        print("Overridden")
    def size(self):
        print("Sweet")


ob = mangoes()
ob.taste()
ob.size()
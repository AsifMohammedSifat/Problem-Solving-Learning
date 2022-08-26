from multipledispatch import dispatch

class my_calculator:
    @dispatch(int,int)
    def product(self,num1,num2):
        print(num1*num2)

    @dispatch(float,int,str)
    def product(self,num1,num2,num3):
        print(num1*num2*int(num3))



num1 = my_calculator()
num1.product(5,10)
num1.product(5.5,10,"15")

class my_calculator:
    def myProduct(self,num1,num2=None,num3=None):
        if(num1!=None and num2!=None and num3!=None):
            print(num3*num2*num1)
        elif(num1!=None and num2!=None):
            print(num1*num2)
        else:
            print(num1)



num1 = my_calculator()
num1.myProduct(5)
num1.myProduct(5,10)
num1.myProduct(5,10,15)
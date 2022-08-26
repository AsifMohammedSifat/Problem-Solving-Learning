'''
  Method Overloading
'''
class my_calculator:
    def myProduct(self, *num):
        sum = 1
        for i in num:
            sum = sum * i
        print(sum)

num1 = my_calculator()
num1.myProduct(5)
num1.myProduct(5,10)
num1.myProduct(5,10,15)
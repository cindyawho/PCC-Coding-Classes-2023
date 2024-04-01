#Quiz_03 Functions

def Apple(): 
    print('Apples are good.')

def Orange(): 
    print('Oranges are delicious.')

Apple()
Orange()
Orange()


#############

def InfoOnNumbers(a, b):
    print(str(a))
    print(str(b))

InfoOnNumbers(5, 6)
InfoOnNumbers(17, 18)

#############

def myFunction():
    return 6

print(str(myFunction()))
print(str(myFunction()))

#############

def Summed(a, b):
    sum = a + b
    return sum

x = Summed(5, 6)
print(str(x))

print(str(Summed(24, 25)))
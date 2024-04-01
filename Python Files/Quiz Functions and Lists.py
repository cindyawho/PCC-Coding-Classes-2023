#Quiz Functions and Lists

# def stToInt(num): 
#     if (num == "zero"):
#         print(num)
#         return 0
#     elif (num == "one"):
#         print(num)
#         return 1
#     elif (num == "two"):
#         print(num)
#         return 2
#     elif (num == "three"):
#         print(num)
#         return 3
#     elif (num == "four"):
#         print(num)
#         return 4
#     elif (num == "five"):
#         print(num)
#         return 5
#     elif (num == "six"):
#         print(num)
#         return 6
#     elif (num == "seven"):
#         print(num)
#         return 7
#     elif (num == "eight"):
#         print(num)
#         return 8
#     elif (num == "nine"):
#         print(num)
#         return 9
#     else:
#         print(num)
#         return -1
    

# stToInt('one')
# stToInt('three')
# stToInt('six')
# stToInt('NINE')
# stToInt('Hello I am')

# def stInt(stringInput):
#     print(stringInput)
#     return 5

#Question 2
def listInt(listInput):
    print(listInput)
    return [5, 7]

numList = listInt([2, "two", "banana"])
x = numList[0]
y = numList[1]
print(x)
print(y)

#Question 3
def intConc(num1, num2, num3, num4, num5):
    num1 = str(num1)
    num2 = str(num2)
    num3 = str(num3)
    num4 = str(num4)
    num5 = str(num5)
    stringInts = num1 + num2 + num3 + num4 + num5
    return(stringInts)

print(intConc(1, 2, 3, 4, 5))

def intConcList(listIn):
    stringInts = ""
    for i in range(len(listIn)):
        stringInts = stringInts + str(listIn[i])
        i = i + 1
    return stringInts

listInput = [1, 2, 3, 4, 5]
print(intConcList(listInput))

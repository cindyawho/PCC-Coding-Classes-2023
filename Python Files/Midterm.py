#Midterm

##################################################################

#Question 3
# somevar = 2 + 4
# somevar += 6
# print(somevar)

##################################################################

#Question 4 Chosen Method
# print('Please input three integers.')
# num1 = int(input('Integer one: '))
# num2 = int(input('Integer two: '))
# num3 = int(input('Integer three: '))

# def divByFive(num):
#     if num % 5 == 0:
#         print(num, 'is divisible by 5')

#     else:
#         print(num, 'is not divisible by 5')

# divByFive(num1)
# divByFive(num2)
# divByFive(num3)

##Question 4 method 2
# userInput = input('Please input three integers separated by commas. ')

# def findNums(userInput, i):
#     userNums = userInput.split(", ")
#     #print(userNums[i])
#     return int(userNums[i])

# num1 = findNums(userInput, 0)
# num2 = findNums(userInput, 1)
# num3 = findNums(userInput, 2)

# def divByFive(num):
#     if num % 5 == 0:
#         print(num, 'is divisible by 5')

#     else:
#         print(num, 'is not divisible by 5')

# divByFive(num1)
# divByFive(num2)
# divByFive(num3)

##################################################################

#Question 5

# sum = 0
# i = 1

# while i in range(1, 2001): 
#     if (i % 7 == 0 and i % 2 != 0):
#         sum = sum + i
#         i = i + 1
#     else:
#         i = i + 1
#         continue

# print('The sum of all integers divisible by 7, but not divisible by 2 from 1 to 2000 is', sum)

##################################################################

#Question 6
# sum = 0
# for i in range(0,100):
#     if i % 2 != 0:
#         sum += i
# print(sum)

##################################################################

#Question 7
# def absDiff(a, b):
#     a = abs(a)
#     b = abs(b)
#     diff = a - b
#     return diff

# x = absDiff(-12, -6)
# print(x)

##################################################################

#Question 8
# x = 12
# y = 22

# if x < y:
#     print(y-x)
# elif x == y:
#     print(x+y)
# else:
#     print(x-y)

##################################################################

#Question 9
# userName = input('Please input your first, middle and last name: ')

# def printMiddle(fullName):
#     middleName = fullName.split(" ")[1]
#     print(middleName)

# printMiddle(userName)
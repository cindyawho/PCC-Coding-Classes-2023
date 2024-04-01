#PCC_Python_Assignment_Draft_Space


#########################################################################
#May 30 Python Assignment ACh02-00 (User input, hourly rate)

#Write a program to prompt the user for hours and rate per hour to compute gross pay.
#so a sample run of your program should look like this:
#Enter Hours: 35 
#Enter Rate: 2.75 
#Pay: 96.25

hours = float(input('Enter Hours: '))

rate = float(input('Enter Rate: '))

pay = hours*rate

print('Pay: ', pay)

#########################################################################
#May 30 Python Assignment ACh02-02 (Average)
num1 = 125
num2 = 28
num3 = -25

print('num1 is ' + str(num1) + '.\n')
print('num2 is ' + str(num2) + '.\n')
print('num3 is ' + str(num3) + '.\n')

average = (num1 + num2 + num3)/3

print('The average of num1, num2, num3 is ' + str(round(average, 2)) + '.')
#########################################################################

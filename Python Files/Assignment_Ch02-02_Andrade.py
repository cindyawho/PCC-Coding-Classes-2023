#Assignment_Ch02-02_Andrade

num1 = 125
num2 = 28
num3 = -25

print('num1 is ' + str(num1) + '.\n')
print('num2 is ' + str(num2) + '.\n')
print('num3 is ' + str(num3) + '.\n')

average = (num1 + num2 + num3)/3

print('The average of num1, num2, num3 is ' + str(round(average, 2)) + '.')

###################################################

#Cindy Andrade's Program for finding the 
#diagonal of a rectangle given the length and width input.

length = float(input('\nPlease enter the Length of the rectangle: '))

width = float(input('\nPlease enter the Width of the rectangle: '))

diagonal = (length**2 + width**2)**(1/2)

print('\nThe diagonal of the rectangle is: ', round(diagonal, 2))

###################################################

seconds = float(input('\nEnter the elapsed time in seconds: '))

print('The elapsed time in seconds = ' + str(int(seconds)))

hours = int((seconds/60)/60)
minutes = int((seconds/60)%60)
seconds = int((seconds%60))

print('The equivalent time in hours:minutes:seconds = ' + str(hours) + ':' + str(minutes) + ':' + str(seconds))




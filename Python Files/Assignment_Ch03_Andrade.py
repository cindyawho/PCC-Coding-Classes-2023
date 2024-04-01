#Assignment_Ch03_Andrade

####################################################
#Ch.3.1 try/except

try :
    hours = float(input('Enter Hours: '))
    rate = float(input('Enter Rate: '))
    pay = hours*rate
    print('Pay: ', pay)
except :
    print('Please input numerical values')

####################################################

#Ch.3.3 divisible by 3 and/or 5

try:
    userNum = int(input('Hello! Please input an integer: '))

    if ((userNum % 3 == 0) and (userNum % 5 == 0)) :
        print('The integer is divisible by 3 and 5.')

    elif userNum % 5 == 0 :
        print('The integer is divisible by 5.')

    elif userNum % 3 == 0 :
        print('The integer is divisible by 3.')

    else :
        print('Not divisible by 3 or 5')

except:
    print('Error. Please input an integer next time. Thank you.')
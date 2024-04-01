#Assignment Ch. 5-01 While loop, sum of even and odd integers

#repeat = True #I was initially going to use a variable to check
#              #if I should repeat the program, unecessary if using 
#              #continue and break

while True :    #repeat == True:
    print('\nPlease enter 10 integers: ')
    evenSum = 0 #initializing variables
    oddSum = 0
    count = 0

    while count < 10 :
        num = int(input(''))
        if num % 2 == 0:
            evenSum = evenSum + num
        else:
            oddSum = oddSum + num

        count = count + 1

    print('\nEven sum: ' + str(evenSum))
    print('Odd sum: ' + str(oddSum))

    checkRepeat = input('\nDo you wish to repeat this program? (y/n)\n')

    if checkRepeat == 'y':
        continue
    elif checkRepeat == 'n':
        break
    else : # in case the user inputs something other than y and n, just break
        break

print('\nDone!')
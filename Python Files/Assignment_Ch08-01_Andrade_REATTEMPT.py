#Assignment_Ch08-01_Andrade

def createList(num): #this feels unecessary
    newList = []
    for i in range(num):
        newList.append(0)
    return newList

def fillList(num, listName): 
    # listName.clear()
    for i in range(num):
        listName[i] = i
    return None   


def collectUserInputTime(): #no arguments
    #ask user for starting time
    timeInput = input('Enter the time the call starts in 24-hour rotation:\n')
    listInput = timeInput.split(':')
    #print(listInput)
    startHour = listInput[0]
    startMinute = listInput[1]
    #return startHour and startMinute
    return startHour, startMinute

def validateUserInputTime(startHour, startMinute): #arguments are the ones returned by collectUserInputTime()
    try:
        if int(startHour) not in hoursList:
            return False
        elif int(startMinute) not in minutesList:
            return False
        else :
            return True
    except:
        return False
#############################################
##  USER DAY = MON, TUES, WED, etc. 

def collectUserInputDay(): #no arguments
    dayInput = input('Enter the first two letters of the day of the week:\n')
    firstDayCharacter = dayInput[0].lower()
    secondDayCharacter = dayInput[1].lower()
    #print(firstDayCharacter)
    #print(secondDayCharacter)
    return firstDayCharacter, secondDayCharacter

def validateUserInputDay(firstDayCharacter, secondDayCharacter): 
    day = firstDayCharacter + secondDayCharacter
    try:
        if day not in daysList:
            return False
        else :
            return True
    except:
        return False

# ############################################ 
def collectUserInputCallLength(): #no arguments
    #ask user for starting time
    timeInput = input('Enter the length of the call in (hours:minutes):\n')
    listInput = timeInput.split(':')
    callLengthHour = listInput[0]
    callLengthMinute = listInput[1]
    return callLengthHour, callLengthMinute

def validateUserInputCallLength(callLengthHour, callLengthMinute): 
    try:
        if int(callLengthHour) not in hoursList:
            return False
        elif int(callLengthMinute) not in minutesList:
            return False
        else :
            return True
    except:
        return False
    
#################################################

def calculateTotalCost(startHour, startMinute, firstDayCharacter, secondDayCharacter, callLengthHour, callLengthMinute):
    rate = 0
    if (int(startHour) >= 8 and int(startHour) < 18 and firstDayCharacter != 's') or (int(startHour) >= 8 and int(startHour) == 18 and int(startMinute) == 0 and firstDayCharacter != 's'):
        rate = .4
    elif (int(startHour) < 8 or int(startHour) > 18) and firstDayCharacter != 's':
        rate = .25
    else:
        rate = 0.15
    
    callLength = int(callLengthHour) * 60 + int(callLengthMinute)
    cost = round(rate * callLength, 2)
    return cost

#################################################

def collectUserInputYesNo():
    yesNoInput = input('Do you want to repeat the program (y/n)?\n')
    yesNoInput = yesNoInput.lower()
    return yesNoInput

def validateUserInputYesNo(YesOrNo):
    if YesOrNo not in responseList:
        return False
    else :
        return True
#################################################

#Main Python Program

#Lists that we need:
hoursList = createList(24)
fillList(24, hoursList)
minutesList = createList(60)
fillList(60, minutesList)
daysList = ['mo', 'tu', 'we', 'th', 'fr', 'sa', 'su']
responseList = ['y', 'n']

while True:
    while True:
        sH, sM = collectUserInputTime()
        if validateUserInputTime(sH, sM):
            #print('Thank you!')
            break
        else:
            print('\nInvalid time input.\nPlease try again.\n')
            continue

    while True:
        fD, sD = collectUserInputDay()
        if validateUserInputDay(fD, sD):
            #print('Thank you!')
            break
        else:
            print('\nInvalid day input.\nPlease try again.\n')
            continue

    while True:
        cLH, cLM = collectUserInputCallLength()
        if validateUserInputCallLength(cLH, cLM):
            #print('Thank you!')
            break
        else:
            print('\nInvalid call length input.\nPlease try again.\n')
            continue

    cost = calculateTotalCost(sH, sM, fD, sD, cLH, cLM)
    print('\nCost of the call: $' + '{0:.2f}'.format(cost) +'\n')

    while True:
        yesOrNo = collectUserInputYesNo()
        if validateUserInputYesNo(yesOrNo):
            #print('Thank you!')
            break
        else:
            print('\nInvalid response.\nPlease try again.\n')
            continue
    
    if yesOrNo == 'y':
        continue
    else:
        break 

print('\nThank you for using this automated Long-Distance Call calculator. Have a nice day.')

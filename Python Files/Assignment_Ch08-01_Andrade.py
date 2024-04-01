#Assignment_Ch08-01_Andrade

#Any call started between 8:00 A.M. and 6:00 P.M., 
#Monday through Friday, is billed at a rate of $0.40 per minute.

#Any call starting before 8:00 A.M. or after 6:00 P.M., 
#Monday through Friday, is charged at a rate of $0.25 per minute.

#Any call started on a Saturday or Sunday is charged 
#at a rate of $0.15 per minute.

###############################################################

def createList(num): #this feels unecessary
    newList = []
    for i in range(num):
        newList.append(0)
    return newList

def fillList(num, listName): 
    listName.clear()
    #listName.remove(0)
    for i in range(num):
        listName.append(i)
    return None   


#Lists that we need:
hoursList = createList(24)
fillList(24, hoursList)
minutesList = createList(60)
fillList(60, minutesList)
daysList = ['mo', 'tu', 'we', 'th', 'fr', 'sa', 'su']
responseList = ['y', 'n']

#print(hoursList) #testing functions

def collectUserInputTime():
    while True:
        timeInput = input('Enter the time the call starts in 24-hour rotation:')
        listInput = timeInput.split(':')
        hoursInput = int(listInput[0])
        minutesInput = int(listInput[1])
        
        if hoursInput in hoursList():
            callLengthHour = hoursInput
        else :
            print('Invalid time input.\nPlease try again.\n\n')
            continue
        
        if minutesInput in minutessList():
            callLengthMinute = minutesInput
        else :
            print('Invalid time input.\nPlease try again.\n\n')
            continue
        
        break
    startHour = str(callLengthHour)
    callLengthMinute = str(callLengthMinute)

    return callLengthHour, callLengthMinute

def validateUserInputCallLength(callLengthHour, callLengthMinute):
    if callLengthHour in hoursList():
        True
    else :
        return False
        
    if callLengthMinute in minutessList():
        True
    else :
        return False

def costCalculator(day, time, length):

    
    
    while True:
        timeInput = input('Enter the time the call starts in 24-hour rotation:')
        if timeInput in hoursList():
            break
        else :
            print('Invalid time input.\nPlease try again.\n\n')
            continue

    finalCost = 5
    return finalCost
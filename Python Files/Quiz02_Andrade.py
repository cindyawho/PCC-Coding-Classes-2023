#Quiz04_Andrade

def YesNo(num): 
    if (num%2 == 0 and num%20 == 0 and num%60 != 0) or (num%87 == 0):
        return True
    else:
        return False
    

for i in range(1,3001) :
    #print(str(i))
    #YesNo(i) #not needed because the if statement already checks the function
    if YesNo(i) == True:
        print("The number " + str(i) + " is divisible by both 2 and 20 but not 60, or is divisible by 87." )
    else:
        continue
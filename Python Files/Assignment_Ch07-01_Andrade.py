#Assignment_Ch07-01_Andrade

dataFile = open(r'C:\Users\cindy\OneDrive\Documents\Python Files\data.txt', 'r')
#print(dataFile) #prints data.txt, really long file

firstNames = []

for line in dataFile:    
    if line.split("\t")[0] in firstNames :
        continue
    else :
        firstNames.append(line.split("\t")[0])

def nameCounter(firstName): 
    firstName.lower() #lowercases inputted first name
    
    dataFile2 = open(r'C:\Users\cindy\OneDrive\Documents\Python Files\data.txt', 'r')
    count = 0 #variable to count names
    countNames = dataFile2.readlines() #creates list of file text

    for item in countNames: #lowercases entire file
        item.lower() 

    for line in countNames: 
        if str(firstName)+'\t' in line:
            count=count+1 #counts times the first name appears in file only in the first column where first names are written
    return count

for i in range(0,len(firstNames)) :
    print(nameCounter(firstNames[i]), firstNames[i])

#################### A solid attempt that doesn't look at lowercase names because first column is always in uppercase###########
# def nameCounter(firstName): #a function to count the number of times the name appears in the file (in the first name column)
#     dataFile2 = open(r'C:\Users\cindy\OneDrive\Documents\Python Files\data.txt', 'r')
#     count = 0
#     countNames = dataFile2.readlines()
#     for line in countNames:
#         if str(firstName)+'\t' in line:
#             count=count+1
#     return count

# for i in range(0,len(firstNames)) :
#     print(i, nameCounter(firstNames[i]), firstNames[i]) #i is the unique name number, nameCounter finds how many times it appears, firstNames[i] is the actual name


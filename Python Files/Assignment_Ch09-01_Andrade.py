#Assignment_Ch09-01_Andrade

def collectName(): # just testing creating a function for this
    return input('Please input the name of your friend. To end the program, type "end".\n')


#Main Python Program

friendDict = {}
print('\nWelcome to "My Friend Dictionary Creator".\n')

while True:
    name = collectName()
    if name == 'end':
        break

    age = input('Please input the age of that friend.\n')
    friendDict.update({name: age})

#print(friendDict)

for name, age in friendDict.items():
    print(name, age)
#Assignment_Ch08-02_Andrade

MT = [ ]

#######################INITIALIZING 2D LIST USING ZEROS#################################
i = 0
while i < 11:
    newList = []
    j = 0
    while j < 11:    
        newList.append(0)
        j = j+1
    MT.append(newList)
    i=i+1


#######################CREATING MULTIPLICATION TABLE#################################
i = 0
while i < 11:
    j = 0
    while j < 11:    
        MT[i][j] = i*j
        j = j+1
    i=i+1

#######################ADJUSTING OUTER ROW AND COLUMN#################################
i = 0
j = 0
#print(j)
while j < 11:
    #print(j)
    MT[i][j] = j
    #print(MT[i][j])
    j = j + 1

i = 0
j = 0
while i < 11:
    #print(i)
    MT[i][j] = i
    #print(MT[i][j])
    i = i + 1

MT[0][0] = "X"

#######################PRINTING MULTIPLICATION TABLE#################################
print('Multiplication Table:')
i = 0
while i < 11:
    j = 0
    while j < 11:    
        print(MT[i][j], '\t', end='')
        j = j+1
    i=i+1
    print('')
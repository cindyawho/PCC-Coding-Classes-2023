#Assignment_Ch05-02_Andrade

print('Multiplication Table:')

for i in range(0,11): 
    if i == 0:
        for j in range(0,11):
            if j == 0:
                print('X', end='\t')
            else:
                print(j, end='\t')
        #print('')
    else:
        for j in range(0,11):
            if j == 0 and i != 0:
                print(i, end='\t')
            else:
                product = i*j
                print(product, end='\t')
    print('')
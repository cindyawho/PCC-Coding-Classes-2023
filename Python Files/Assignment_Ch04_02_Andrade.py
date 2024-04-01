#Assignment_04_02_Andrade

#Assignment Ch. 4 #2

userYear = int(input('Enter a year between 1000 to 3000: '))

def returnRomanThousandsPlace(userYear) :
  romanThous = 0
  thous = (userYear - userYear%1000)/1000
  #print (str(thous)) #used for a check
  if thous == 1:
    romanThous = 'M'
  elif thous == 2:
    romanThous = 'MM'
  elif thous == 3:
    romanThous = 'MMM'
  return romanThous

def returnRomanHundredsPlace(userYear) :
  romanHun = 0
  hun = (userYear%1000 - userYear%100)/100
  if hun == 1:
    romanHun = 'C'
  elif hun == 2:
    romanHun = 'CC'
  elif hun == 3:
    romanHun = 'CCC'
  elif hun == 4: 
    romanHun = 'CD'
  elif hun == 5: 
    romanHun = 'D'
  elif hun == 6:
    romanHun = 'DC'
  elif hun == 7:
    romanHun = 'DCC'
  elif hun == 8:
    romanHun = 'DCCC'
  elif hun == 9: 
    romanHun = 'CM'
  else :
    romanHun = ''
  return romanHun

def returnRomanTensPlace(userYear) :
  romanTen = 0
  ten = (userYear%100 - userYear%10)/10
  if ten == 1:
    romanTen = 'X'
  elif ten == 2:
    romanTen = 'XX'
  elif ten == 3:
    romanTen = 'XXX'
  elif ten == 4:
    romanTen = 'XL'
  elif ten == 5:
    romanTen = 'L'
  elif ten == 6:
    romanTen = 'LX'
  elif ten == 7:
    romanTen = 'LXX'
  elif ten == 8:
    romanTen = 'LXXX'
  elif ten == 9:
    romanTen = 'XC'
  else :
    romanTen = ''
  return romanTen

def returnRomanOnesPlace(userYear) :
  romanOne = 0
  one = userYear%10
  if one == 1:
    romanOne = 'I'
  elif one == 2:
    romanOne = 'II'
  elif one == 3:
    romanOne = 'III'
  elif one == 4:
    romanOne = 'IV'
  elif one == 5:
    romanOne = 'V'
  elif one == 6:
    romanOne = 'VI'
  elif one == 7:
    romanOne = 'VII'
  elif one == 8:
    romanOne = 'VIII'
  elif one == 9:
    romanOne = 'IX'
  else:
    romanOne = ''
  return romanOne

print('Your number in roman numerals is: ' + returnRomanThousandsPlace(userYear) + returnRomanHundredsPlace(userYear) + returnRomanTensPlace(userYear) + returnRomanOnesPlace(userYear) )

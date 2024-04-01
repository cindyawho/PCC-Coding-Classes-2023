#Final Summer 2023 Andrade

#7 questions, worth 70 points total

#You may need to do some research on the internet, previous lectures, 
#or looking at the Canvas announcements to answer some of the questions.

################################################################
##########################Question 1############################

#A class __________ something and _________ something.
#using my google docs, class knows and does

################################################################
##########################Question 2############################

#i = i + 1 is the same as ++i in python
#pretty sure this is false
i = 0 
i = i + 1 #prints i = 1
print("i is ", i)

++i #does nothing
print("i is ", i)

i += 1
print("i is ", i)


################################################################
##########################Question 3############################

#Lists are like Tuples except Lists can not be changed (are immutable).
#false

################################################################
##########################Question 4############################

(a,b) = (99, 98)

print(a)

#will return

################################################################
##########################Question 5############################

#In Python Dictionaries store Key, Value pairs.
#true

################################################################
##########################Question 6############################

#Regular expressions can be used to find patterns in text documents.
#true

################################################################
##########################Question 7############################
import re

str ='''
Z3244534en
Zen
Zen345
Z1en'''

data = re.findall('^Z[0-9]+en', str, re.MULTILINE)
print(data)
#on the lines of text below (value of str variable above is the lines of text below):



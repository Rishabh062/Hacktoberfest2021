#code to extract words from string
# using regex( findall() )
import re
 
# initializing string 
test_string = "hello guys, i am  best @# gamer.!!!"
 
# printing original string
print ("The original string is : " +  test_string)
 
# using regex( findall() )
# to extract words from string
res = re.findall(r'\w+', test_string)
 
# printing result
print ("The list of words is : " +  str(res))

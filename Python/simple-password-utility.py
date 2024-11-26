# hacktoberfest 2021
import string
from random import *
characters = string.ascii_letters + string.punctuation  + string.digits
password =  "".join(choice(characters) for x in range(randint(8, 16)))
print ("Your new randomly generated password is: " + password)
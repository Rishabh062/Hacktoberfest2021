#this is the example of file handling using python

def game():
	return int(input("enter score "))
score=game()
with open("Highscore.txt") as f:
	hiScoreStr=f.read()
if hiScoreStr=='':
	with open("Highscore.txt","w") as f:
		f.write(str(score))
		print("updated")
elif int(hiScoreStr)<score:
	with open("Highscore.txt","w") as f:
		f.write(str(score))
		print("updated")
elif int(hiScoreStr)>=score:
	print(hiScoreStr)

print("do you want to reset?")
choice = input("enter yes or no in lowercase ")
if choice == "yes":
	score = int(input("enter new value "))
	with open("Highscore.txt","w") as f:
		f.write(str(score))
		print("updated")
else:
	print("Appreciate your patience")
print(f.read())

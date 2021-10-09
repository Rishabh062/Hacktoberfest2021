import turtle
import time
import random
import pickle


# instructions.....print("<<<INSTRUCTIONS>>>")
print("W for up")
print("S for down")
print("A for left")
print("D for right")
print("Q to quit")
print("Z to pause for 10 seconds")


running=True# screen
wn=turtle.Screen()
wn.setup(590,600)
wn.bgcolor("green")
wn.tracer(0)
wn.title("Snake Game")

delay=0.1# Snake head
head = turtle.Turtle()
head.speed(0)
head.shape("square")
head.color("black")
head.penup()
head.goto(0,0)
head.direction = "stop"


def food_place():
    global x
    global y
    X = []
    Y = []
    for i in range(-280, 280):
        if i % 20 == 0:
            X.append(i)
    for i in range(-280, 240):
        if i % 20 == 0:
            Y.append(i)
    x=random.choice(X)
    y=random.choice(Y)


# Snake food
food = turtle.Turtle()
food.speed(0)
food.shape("circle")
food.color("red")
food.penup()
food_place()
food.goto(x,y)

segments = []


# taking out highscore......
try:
    high_score=pickle.load(open("high_score.dat" , "rb"))
    high_score=int(high_score)
except:
    high_score=0
# score..
score=0
# line
line = turtle.Turtle()
line.speed(0)
line.shape("square")
line.color("white")
line.penup()
line.hideturtle()
line.goto(0, 250)
line.write("_______________________________________", align="center", font=("Courier", 24, "normal"))


# Pen'
pen = turtle.Turtle()
pen.speed(0)
pen.shape("square")
pen.color("white")
pen.penup()
pen.hideturtle()
pen.goto(0, 260)
pen.write("Score: {}  High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))

# Pen1
pen1 = turtle.Turtle()
pen1.speed(0)
pen1.shape("square")
pen1.color("white")
pen1.penup()
pen1.hideturtle()
pen1.goto(0, 0)

# Pen2
pen2 = turtle.Turtle()
pen2.speed(0)
pen2.shape("square")
pen2.color("white")
pen2.penup()
pen2.hideturtle()
pen2.goto(0, 200)

# Functions
def pause():
    global head
    if head.direction != "stop":
        a=head.direction
        head.direction="stop"        
        pen1.write("Paused", align="center", font=("Courier", 30, "normal"))
        pen2.write("Game will be paused for 10 seconds", align="center", font=("Courier", 20, "normal"))
        time.sleep(6)
        pen1.clear()

        pen1.write("3", align="center", font=("Courier", 30, "normal"))
        time.sleep(1)
        pen1.clear()

        pen1.write("2", align="center", font=("Courier", 30, "normal"))
        time.sleep(1)
        pen1.clear()

        pen1.write("1", align="center", font=("Courier", 30, "normal"))
        time.sleep(1)
        pen1.clear()

        pen1.write("GO !", align="center", font=("Courier", 30, "normal"))
        time.sleep(1)
        pen1.clear()
        pen2.clear()
        head.direction=a


def exitit():
    global running
    global head
    global segments
    segments.clear()
    head.goto(0,0)
    head.direction="stop"    
    running=False    
    wn._destroy()

def go_up():
    if head.direction != "down" :
            head.direction = "up"
def go_down():
    if head.direction != "up" :
            head.direction = "down"
def go_left():
    if head.direction != "right":
            head.direction = "left"
def go_right():
    if head.direction != "left" :
            head.direction = "right"
def move():
    if head.direction == "up":
        y = head.ycor()
        head.sety(y + 20)

    if head.direction == "down":
        y = head.ycor()
        head.sety(y - 20)

    if head.direction == "left":
        x = head.xcor()
        head.setx(x - 20)

    if head.direction == "right":
        x = head.xcor()
        head.setx(x + 20)


# onkeypress
wn.listen()
wn.onkeypress(go_up,"w")
wn.onkeypress(go_left,"a")
wn.onkeypress(go_right,"d")
wn.onkeypress(go_down,"s")
wn.onkeypress(exitit,"q")
wn.onkeypress(pause,"z")


def check():
    global head
    global segments
    global score
    global delay
    x=head.xcor()
    y=head.ycor()
    if x>280 or x<-280 or y>240 or y<-280:
        head.direction="stop"        
        time.sleep(0.1)
        head.goto(0,0)
        score=0        
        pen.clear()
        pen.write("Score: {}  High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))
        delay=0.1        
        for segment in segments:
            segment.goto(1000,1000)
        segments.clear()
    for segment in segments:
        if head.distance(segment)<20:
            head.direction = "stop"            
            time.sleep(0.1)
            head.goto(0, 0)
            score = 0            
            pen.clear()
            pen.write("Score: {}  High Score: {}".format(score, high_score), align="center",                      font=("Courier", 24, "normal"))
            delay=0.1
            for segment in segments:
                segment.goto(1000, 1000)
            segments.clear()




while running:
    wn.update()

    if head.distance(food)<20:
        food_place()
        food.goto(x,y)
        new_segment = turtle.Turtle()
        new_segment.speed(0)
        new_segment.shape("square")
        new_segment.color("grey")
        new_segment.penup()
        segments.append(new_segment)
        delay -= 0.001

        # scoring.....        
        score+=1        
        if score>high_score:
            high_score=score
            pickle.dump(high_score , open("high_score.dat" , "wb"))

        pen.clear()
        pen.write("Score: {}  High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))


    for i in range(len(segments)-1,0,-1):
            x=segments[i-1].xcor()
            y=segments[i-1].ycor()
            segments[i].goto(x,y)

    #     with head.............
    if len(segments) > 0:
            y = head.ycor()
            x = head.xcor()
            segments[0].goto(x, y)
    move()

    check()

    time.sleep(delay)
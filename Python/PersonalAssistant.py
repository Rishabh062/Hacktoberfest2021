import pyttsx3                                                  #text to speech
import datetime                                                 #date and time
import speech_recognition as sr                                 #speech recognition
import wikipedia                                                #wikipedia
import smtplib                                                  #mail
import webbrowser as wb                                         #web browsing
import os                                                       #system access
import pyautogui                                                #screenshot
import psutil                                                   #CPU and Battery
import pyjokes                                                  #jokes

engine = pyttsx3.init()                                         #variable for converting text to speech

def speak(audio):                                               #function for converting text to speech
    engine.say(audio)
    engine.runAndWait()
    
def time():                                                     #function for speaking time
    Time = datetime.datetime.now().strftime("%I:%M:%S")
    speak(Time)

def date():                                                     #function for speaking date
    year = int(datetime.datetime.now().year)
    month = int(datetime.datetime.now().month)
    date = int(datetime.datetime.now().day)
    speak(date)
    speak(month)
    speak(year)
    
def wishme(n):                                                  #function for wishing the user
    speak("Welcome back " + n)
    speak("It's")
    time()
    speak("now!")
    speak("Today's date is ")
    date()
    hour = datetime.datetime.now().hour
    if hour >=6 and hour<=12:
        speak("Good morning nag!")
    elif hour >=12 and hour<=18:
        speak("Good afternoon nag!")
    elif hour >=18 and hour<=24:
        speak("Good night nag!")

def takeCommand():                                              #function for accepting commands
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening..")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing..")
        query = r.recognize_google(audio, language='en-in')
        print(query)
    except Exception as e:
        print(e)
        speak("None")
        return "None"
    return query

def sendEmail(to, content):                                     #function for sending mail
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.eclo()
    server.starttls()
    server.login('laxminagln@gmail.com', 'password')
    server.sendmail('laxminagln@gmail.com', to, content)
    server.close()

def screenshot():                                               #function for taking screenshot
    img = pyautogui.screenshot()
    img.save('file path with file name and extension')
    
def cpu():                                                      #function for speaking CPU stats
    usage = str(psutil.cpu_percent())
    speak("c p u is at " + usage)
    battery = psutil.sensors_battery()
    speak("Battery is at " + battery.percent)

def jokes():                                                    #function for telling jokes
    speak(pyjokes.get_joke())

if __name__ == "__main__":
    wishme("nag")
    while True:
        query = takeCommand().lower()
        
        if 'time' in query:
            time()
        
        elif 'date' in query:
            date()
        
        elif 'wikipedia' in query:
            speak("Searching...")
            query = query.replace("wikipedia", "")
            result = wikipedia.summary(query, sentences=2)
            print(result)
            speak(result)
        
        elif 'send email' in query:
            try:
                speak("What should I say?")
                content = takeCommand()
                to = 'recipient email'
                sendEmail(to, content)
                speak("Email success")
            except Exception as e:
                print(e)
                speak("Unable to send mail")
        
        elif 'search in chrome' in query:
            speak("What should I search?")
            chromepath = 'file path'
            search = takeCommand().lower()
            wb.get(chromepath).open_new_tab(search+'.com')
        
        elif 'logout' in query:
            os.system("shutdown -1")
        
        elif 'shutdown' in query:
            os.system("shutdown /s /t 1")
        
        elif 'restart' in query:
            os.system("shutdown /r /t 1")
            
        elif 'play songs' in query:
            songs_dir = 'file path'
            songs = os.listdir(songs_dir)
            os.startfile(os.path.join(songs_dir, songs[0]))
            
        elif 'remember that' in query:
            speak("what should I remember?")
            data = takeCommand()
            speak("You told me to remember " + data)
            remember = open('data.txt', 'w')
            remember.write(data)
            remember.close()
            
        elif 'do you know anything' in query:
            remember = open('data.txt', 'r')
            speak("Once you told me that "+remember.read())
        
        elif 'screenshot' in query:
            screenshot()
            speak("Screenshot done")
            
        elif 'c p u' in query:
            cpu()
            
        elif 'joke' in query:
            jokes()
        
        elif 'offline' in query:
            quit()

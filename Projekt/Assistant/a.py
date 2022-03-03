
import pyttsx3 as p
import datetime
import speech_recognition as sr

# Text to Speech

engine = p.init()
rate = engine.getProperty('rate')
engine.setProperty('rate', 145)
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[25].id)

# Speech Function

def speak(text):
    engine.say(text)
    engine.runAndWait()

r =sr.Recognizer()

    # Return Logic

def time():
    current_time = datetime.datetime.now().strftime("%I:%M:%S")
    speak(current_time)


def date():
    year  = int(datetime.datetime.now().year)
    month = int(datetime.datetime.now().month) 
    date  = int(datetime.datetime.now().day) 
    speak(date)
    speak(month)
    speak(year)


def greeting():
    hour = datetime.datetime.now().hour
    if hour >= 6 and hour <12:
        speak("Good Morning")
    elif hour >= 12 and hour <18:
        speak("Good Afternoon")
    elif hour >= 18 and hour <24:
        speak("Good Evening")
    else:
        speak("Good Night")


greeting()
speak("Lets have some fun")



# Reads voice input

try:
    with sr.Microphone() as source:
        r.energy_threshold = 10000
        r.adjust_for_ambient_noise(source,1.2)
        print("Waiting for input")
        audio = r.listen(source)
        text = r.recognize_google(audio,show_all=False)
        print(text)

    if "hello" in text:
        speak("Hi there")

        if "time" in text:
            time()
except:
    pass



    

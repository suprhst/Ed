from tkinter import *
from tkinter import filedialog
from tkinter import font

root = Tk()
root.title('Snakepad')
#root.iconbitmap()
root.geometry("1200x660")

# Main frame

my_frame = Frame(root)
my_frame.pack(pady=5)

# Scrollbar

text_scroll = Scrollbar(my_frame)
text_scroll.pack(side=RIGHT,fill=Y)




# Text box

my_text = Text(my_frame,width=97,height=25,font=("Helvetica",16),selectbackground="yellow",selectforeground="black",undo=True,yscrollcommand=text_scroll.set)
my_text.pack()

# config scrollbar

text_scroll.config(command=my_text.yview)

root.mainloop()
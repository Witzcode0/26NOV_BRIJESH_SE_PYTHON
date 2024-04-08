import tkinter as tk
from tkinter import ttk
import os
import  random
import time
import pygame

screen = tk.Tk()

screen.geometry('400x400')

screen.title("Witz-Music")

screen.configure(bg="lightblue")

logo = 'logo.ico'
screen.iconbitmap(logo)

musics = os.listdir('musics')

def change_bg_color(color):
    screen.config(bg=color)


def play_music(file_path):
    pygame.init()
    pygame.mixer.init()
    pygame.mixer.music.load(file_path)
    pygame.mixer.music.play()

musics_path = "F:\\molmeh\\class\\26NOV_BRIJESH_SE_PYTHON\\advance-python\\GUI\\musics\\"
def shuffle_():
    random.shuffle(musics)
    for music in musics:
        play_music(musics_path + music)
        time.sleep(2)
        

def loop_():
    while (True):
        for music in musics:
            play_music(musics_path + music)
            time.sleep(2)

pygame.time.wait(5000) 

# Create a style object
style = ttk.Style()
style.configure("Custom.TButton", foreground="blue", background="blue", font=("Helvetica", 12))


ttk.Button(screen, text="Shuffle", style="Custom.TButton", command=shuffle_).pack()
ttk.Button(screen, text="Loop", style="Custom.TButton", command=loop_).pack()
change_color_button = ttk.Button(screen, text="Change Color", style="Custom.TButton" ,command=lambda: change_bg_color("lightgreen"))
change_color_button.pack(pady=10)

screen.mainloop()







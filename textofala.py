from gtts import gTTS
import os

texto = str(input("Digite o texto: "))
lingua = "pt"

tts = gTTS(texto, lang=lingua)
tts.save("audio.mp3")

os.system('ffplay -autoexit -nodisp audio.mp3')
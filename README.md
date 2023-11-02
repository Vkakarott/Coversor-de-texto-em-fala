# Conversor de Texto em Fala (Text-to-Speech)

## Versoes
<div style="display: inline_block">
  <img height="40" width="50" src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg"/>
  <img height="40" width="50" src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" />
</div>

##

### Python

<p>Apenas 5 linhas de codigo para gerar um audio</p>

##

<h5>Instalações necessárias</h5>

Biblioteca do gTTS `pip instal gTTS` disponivel em https://gtts.readthedocs.io/en/latest/#


```
from gtts import gTTS
```

##

Ffmpeg é uma ferramenta de linha de comando disponivel em https://www.ffmpeg.org/

Ultilizada nesse codigo para reproduzir o audio no terminal

##

```
import os
```
Biblioteca os ja vem como padrao em Python não ha nescessidade de instalacão

  `.system()` executa comandos no terminal 

##

<h4>Parametros</h4>

`lingua=""` possibilitando diversos idiomas
`-autoexit` encerra o codigo automaticamente apos a execucao do audio
`-nodisp` para nao mostrar o dysplay de execucao doaudio na tela

##

### C

##

<h5>Bobliotecas necessárias</h5>

```
 #include <stdio.h>
 #include <stdlib.h>
```

##

<p>Uso do sintetizador de voz eSpeak disponivel em https://espeak.sourceforge.net/ </p>

```
"espeak -v mb/mb-br1 "texto""

// -v idioma ex: pt, pt-br, en... 
```


```
system() // Executa comandos
```

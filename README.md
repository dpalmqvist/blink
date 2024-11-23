# blink!!!

This project contains the code and instructions for creating a christmas light and sound 
extravaganza. The build target is a Raspberry Pi Pico 2, but I expect it to be easily 
modified for other targets. The important thing is that the target has GPIO and PWM 
outputs.

I recommend using VS Code.

## Adding songs
Songs can be added in separate c-files. Use `bjallerklang.c`as a reference. The format 
should be fairly self-explanatory. I have used ChatGPT with some success, but it is also
obvious from my experiments that ChatGPT isn't exactly musical, so some tweaking might
be necessary to make the songs OK.

When you have added a new song, you also need to add it to `CMakeLists.txt`and to 
`blink.c`.
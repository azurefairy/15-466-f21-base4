# The Road Not Taken

Author: Brad Zhang

Design: Intended to be a 2D choice game, with many forks in the road. Some choices would give the player a minigame to complete.

Text Drawing: Text drawing is computed at runtime. Each piece of text is run through harfbuzz, which shapes the text with Times New Roman font. FreeType is used to load the font. OpenGL drawing of font is not implemented (did not have time)

Screen Shot:

![Screen Shot](screenshot.png)

How To Play:

not yet configured

Sources: tnf.ttf: https://freefontsfamily.com/times-new-roman-font-free/
Credits to https://github.com/jyanln/15-466-f20-game4/commit/289c97fdb6e1b32a4ceecd69f1c5edcb7a671cd3 for only using one commit, as an example of how to structure the pipeline
https://www.freetype.org/freetype2/docs/tutorial/step1.html for a useful tutorial on FreeType
https://github.com/harfbuzz/harfbuzz-tutorial/blob/master/hello-harfbuzz-freetype.c for how to use harfbuzz with freetype

This game was built with [NEST](NEST.md).


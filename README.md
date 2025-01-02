# First project from the HarvardX CS50 course

## Problem to Solve:
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks.

Implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

   #  #
  ##  ##
 ###  ###
####  ####

And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive.

## Resolution

First, the program validate the user input, seeing if he typed a int between 1 and 8, anything besides this is discarded. If the user writes a invalid input, the program re-ask how tall will be the pyramid.

The logic in the pyramid building is a for loop that will iterates X amount of times, X being the user input. So in each loop, I will have more iterations to print the blocks and create the spaces.

If you want to see more details, I did some commentary in the code for each part.
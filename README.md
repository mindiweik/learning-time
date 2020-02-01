# learning-time
Personal projects practicing things I've recently learned, attempting new things, and sharing my research findings in my quest to learn something new each and every day! I mainly use a Macbook Pro and a Raspberry Pi 4 running Raspian.

*I am a total "newb" who is just trying to learn about new things that interest me! Please excuse any incorrect use of terms or language that may arise over time while I learn. I intend to cite and link whenever possible.*


### Monthly Roundup
Over the course of January 2020 I spent time reading "Clean Code", reviewing my notes, learning more about HTML, CSS, and JS, and trying out some Python code for which I applied some of the principles from "Clean Code" by atttempting to create a function that turned the turtles as they were introduced to clean up the code. 

### January 31, 2020 
In an effort to use what I've learned from "Clean Code" thus far, I was challenged to revisit my "Turtle Race!" project and build a function for the twirling part of the code as I initially had to write separate for loops for each individual turtle which is not ideal. I did some basic research on creating python functions as I haven't had much experience with that yet. Creating the function itself was easy enough, but once I added it to the code I had a hard time figuring out how to apply it each consecutive turtle rather than just one. I did come up with one solution that worked, but I was not quite happy with it. This version can be found in turtle-race1.py and consisted of an if else if statement within the function. The major Pros and Cons for turtle-race1.py are as follows:
| PROS | CONS |
| each turtle turns when it is introduced | each turtle is currently named directly |
| the directions for turning is now all in one place rather than under each turtle | if this code were to be used later and someone were to add more turtles, the 5th turtle (eor) would continue turning at each subsequent introduction |

After some more research and many failed attempts and some help from a friend to find the missing piece, I was actually able to complete a more concise code that allows for any number of turtles to be created and an easier way to control the direction of the twirl. This version can be found in turtle-race2.py and this version was what I was working toward and had envisioned when I set out to create this project. I was missing the second parameter in the function to call the name of the turtle so when I initially built it I was only turning the first turtle named "ada". Once this was pointed out it all worked out smoothly as intended!

### January 30, 2020
Moving forward with the [freecodecamp.org](https://www.freecodecamp.org/learn) **Responsive Web Design Certificate**.

> Parts 20-30 out of 52 in the "Applied Visual Design" section taught me:
- how to move a relatively-positioned element,
- all about absolute and fixed positioning and how to affect those, and 
- more about complementary, secondary, and tertiary colors for use on screens.

### January 29, 2020
I continued working on the [freecodecamp.org](https://www.freecodecamp.org/learn) **Responsive Web Design Certificate**. 

> Parts 13-19 out of 52 in the "Applied Visual Design" section taught me:
- about text opacity and consistency (all uppercase, lowercase, capitalized, etc.),
- how to alter heading size, weight, line height, and 
- all about relative positioning.

### January 28, 2020
After working on some of the [freecodecamp.org](https://www.freecodecamp.org/learn) trainings for another reason, I was recently reviewing all of the available info/trainings they have and noticed there were more HTML, CSS and JavaScript certifications. Therefore, I decided to continue working on these as I have already made some significant progress already. Picking up where I left off puts me in the middle of the **Responsive Web Design Certificate**.

> Parts 1-12 out of 52 in the "Applied Visual Design" section taught me:
- some basic tags for markup and text alignment within HTML directly, 
- how to adjust text and line sizes,
- and how to use text backgrounds and box shadows.

### January 24-26, 2020
These last few days I was reviewing and reorganizing/rewriting all of my notes on HTML, CSS and JavaScript that I have accumulated thus far in an effort to further all of my knowledge adn solidify what I have learned.

### January 23, 2020
Today I finished up the "Turtle Race!" project, including the final 2-3 challenges to try to figure out the code on your own. I was able to figure all of them out with some fiddling on my own except for 1: the "Dashed Lines" challenge. I knew it liekly needed to be a nested for loop, but wasn't entirely sure on the formatting and numbers so I did find an online resource to help me out with this. The final version of tyhe project should be available to view in my python-projects folder.

*Over the last few days I have also continued to review my CSS and JavaScript coding notes.*

> Raspberry Pi Intro to Python: [Turtle Race](https://projects.raspberrypi.org/en/projects/turtle-race)

### January 22, 2020
Starting to learn more about the various programming languages available I am working on a vary basic project. One of the recommended introductory projects for Python was the "Turtle Race!" which I felt would be helpful to learn while also being lighthearted. Today I got to the "Racing Turtles" section of the tutorial.

> Raspberry Pi Intro to Python: [Turtle Race](https://projects.raspberrypi.org/en/projects/turtle-race)

### January 21, 2020
Today I completed the last few exercises, Lesson 13 - 15, from "Learn Python the Hard Way". At the end they have some reference material to continue working with Bash and/or the terminal. I played around with some of the commands to familiarize myself, including the info command, the exit command, removing a file and removing a directory, and streaming a file as well as paging up/down within said file.

> Learn Python the Hard Way - Starting at [Lesson 13](https://learnpythonthehardway.org/book/appendix-a-cli/ex13.html)

### January 15-16, 2020
I spent these two days reviewing my noes on JavaScript, HTML and CSS.

### January 14, 2020
My time today was spent reviewing some of my JavaScript notes and moving forward with the lessons from "Learn Python the Hard Way" getting through Exercises 9 - 12. In addition to practicing the other exercises as I continue through, I also spent time learning about making empty files with touch (or new-item for Windows), copying a file with cp, moving files around with mv, and viewing files with the less command.

> Learn Python the Hard Way - Starting at [Lesson 9](https://learnpythonthehardway.org/book/appendix-a-cli/ex9.html)

### January 13, 2020
The focus today was reading more in *Clean Code*. I read chapter 2 which explored much about naming recommendations and suggestions for cleaner code and overall best practices which appears to apply to most every computer language.

### January 12, 2020
Continuing from the lesson where I left off I completed lessons 5 - 8 from Learn Pythin the Hard Way. The most memorable lesson today was the information for additional ways to navigate through the directories using (cd ..) to go back 1 directory, (cd ../../..) to jump back 3+ directories, and the (pushd) and (popd) commands to save and jump to/through a list of saved directories.

> Learn Python the Hard Way - Starting at [Lesson 5](https://learnpythonthehardway.org/book/appendix-a-cli/ex5.html)

### January 10, 2020
To learn more about the terminal and the basics of Python, the site below was recommended. I spent time with lessons 1 - 4 in the free time I had today. Most memorable takeawy is that using the print working directoy (pwd) command will help you get your bearings and then the (cd ~) command will take you back to the home directory.

> [Learn Python the Hard Way](https://learnpythonthehardway.org/book/appendix-a-cli/introduction.html) - Starting with the advice to "SHUT UP AND TYPE ALL OF THIS IN." I dove into the first 4 lessons.

### January 9, 2020
I reworked and finalized my *Clean Code* Markdown file and moved it into a folder I created locally to see how the file system worked within GitHub. I read up on creating folders over the last few days and found out that an empty folder will not be stored/show up on GitHub. Additionally, I started chapter 2 of *Clean Code*.

### January 8, 2020
I wrote up a reflection on chapter 1 of *Clean Code: A Handbook of Agile Software Craftsmanship* by Robert C. Martin in a new Markdown file.

### January 7, 2020
I created a new repository in GitHub using my new Raspberry Pi 4 (built last week). I used my terminal to download a Visual Studio Code remake made to support Raspian on a Linux platform. I spent time writing in my main README file which I will use as a sort of diary entry to briefly describe my daily activities.

> Followed the links [found here](https://pimylifeup.com/raspberry-pi-visual-studio-code/) - A big thank you to [@headmelted](https://github.com/headmelted) for building [a version of VSC](https://code.headmelted.com/) for alternative users!

Later I worked to set up a new folder (which I haven't done yet) for following the book I'm reading, *Clean Code: A Handbook of Agile Software Craftsmanship* by Robert C. Martin. I wasn't entirely successful, but will continue this research to do it correctly.

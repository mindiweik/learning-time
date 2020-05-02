# learning-time Q2 2020
Personal projects documenting things I am practicing from what I've recently learned and sharing my research findings in my quest to learn something new about programming each and every day! I mainly use a Macbook Pro and a Raspberry Pi 4 running Raspian.

### May 1, 2020
Modules 2 and 3 of the [SQL for Data Science](https://courses.edx.org/courses/course-v1:IBM+DB0201EN+1T2020/course/) course has been completed. I did 2 "labs" that had me use the [IBM Cloud](https://www.ibm.com/cloud) to create a database and begin by running SQL within the cloud. In the first lab I practiced using drop, create, insert, select, delete, and update on a test table I created. In the second lab I worked with groupings, strings, and ordering of data.

> This course has an access to the course end date of May 11 which is why I've shifted my focus. It has also been more enjoyable to jump back and forth and learn a lot of different things so I can keep learning even when I feel stuck or frustrated.

### April 30, 3030
This morning I read Chapter 3 of *Clean Code: A Handbook of Agile Software Craftsmanship* by Robert C. Martin. I updated my Reading-Clean-Code.md file with my takeaways in the 01reading folder.

### April 29, 2020
Over the last couple of weeks I have also been dabbling in a few other edX online courses pertaining to computer science and programming languages. I spent 2 weeks working through [CS50's Understanding Technology](https://courses.edx.org/courses/course-v1:HarvardX+CS50T+Technology/course/) and [CS50's Computer Science for Business Professionals](https://courses.edx.org/courses/course-v1:HarvardX+CS50B+Business/course/) to get a "bigger picture" overview on some of the basics because the CS50 Intro to Computer Science course dove in very deep right away. 

Jumping off of that the CS50B course touched on SQL and NoSQL databases and I wanted to learn more about that so I started the [SQL for Data Science](https://courses.edx.org/courses/course-v1:IBM+DB0201EN+1T2020/course/) course to get a better grasp on this area. Today I made it through the first module which was basically an intro into what SQL, a datasbase, and data actually are and how to create an instance on the cloud using IBM Db2 on Cloud. I started in on module 2 as well, but will finish that tomorrow.

I still have another problem set for Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) called recover.c which I plan to continue tomorrow and/or Friday.

### April 28, 2020
After sleeping on it a couple of days I was elated (and also mildly frustrated) to finally figure out the last piece to the puzzle for the filter.c Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) problem set. The blur filter I made needed "height - 1" and "width - 1" to be used in the edge and corner cases I made to be considered as the last index in the array. I imagined that might be the case, but had a hard time conceptualizing it initially. 

Within my c-projects folder there is now a filter-project folder which holds all of the files needed to run the program for reference, but I only wrote the 5 functions within helpers.c ultimately.

### April 25 & 27, 2020
I spent these two days working on the blur function for the filter.c Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) problem set. At this point I have it *almost* entirely working. I intend to continue working on it tomorrow and hope I can get it working!

Admittedly I've tried quite a few solutions. In the end I've only been able to get this blur function to remotely work properly when I do a bunch of if/else if statements. I'm not proud of it presently. I feel like there is a better way to access each pixel and its surrounding pixels to create the blue effect, but thus far haven't been able to figure that out yet! This may be one problem I return to after I finish the program to build a better solution later.

### April 24, 2020
The sepia function for the filter.c Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) problem set actually came fairly easy to get me started for the day. It was a simple implementation of the given sepia formula and I had already created a pointer swap() function which allowed me to quickly and easily change the pixels upon completing the math. The reflection function I had a harder time with and am still a bit confused on, but I was able to get it to work. Once I complete the project I will review to see if I can better piece it together.

However, I am now stuck on the blur function which takes the average of a set of 9 pixels to create new RGB numbers to blur the image. I'm not quite sure where I am going wrong yet and will need more time to figure this one out which I intend to do over the weekend.

### April 23, 2020
First up is the grayscale filter for the filter.c Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) problem set. I was able to compile everything fairly simply as this was one of the easier functions. I was mainly just averaging out each of the RGB numbers and resetting them to the averaged number, but I had some trouble with the round function in this first problem. I discovered through research and discussing with my peers that even when a float is declared, if you are only doing the math with integers C will kick out the decimal automatically. 

The solution was *so* simple: change the 3 in `(image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3` to 3.0. Voila! Today I learned that even something as simple as this will cause major problems within a function and is something to look out for if the math is off!

### April 21, 2020
I spent my time today reviewing all of the pre-made files for the filter.c Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) problem set which is supposed to make four various filters for a .bmp image utilizing and manipulating a new RGBTRIPLE 2D array. Then I reviewed the specs for the problem and spent some time considering the problem and some implementation methods I could use.

### April 19-20, 2020
Over these two days I went over the 5 "Shorts" videos which further covered Hexadecimals, Pointers [in C], Dynamic Memory Allocation, Call Stacks and File Pointers [in C]. This was from the Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) regarding Memory.

### April 18, 2020
I was able to finish the Week 4 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) lecture regarding Memory. Tomorrow I will work through the 5 "Shorts."

### April 17, 2020
After a short 2-day break I was able to complete the runoff.c problem from the Week 3 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) Problem Set. I am now moving on to the Week 4 lecture regarding Memory.

As far as challenges and wins on this problem:
- I struggled for a bit on the print_winner() function because I tried too hard to calculate a majority vote. After reviewing some of my peers' previous comments and issues with this function I realized that there was no need to find the true number for the "majority" which was what I initially tried to do. Instead the majority was just ```candidates[i].votes > (voter_count / 2);``` because the majority count is MORE THAN voter_count / 2. So long as it is not EQUAL to 2 it is correct. In this case simplifying was a much better result and looked cleaner.
- With the find_min() function I knew I had to assign the minimum number of votes, but initially wrote 2 for loops and realized later I was once again overcomplicating itthe problem because when it had a nested loop it did not ignore the eliminated candidates as was intended by the problem.
- The is_tie() and eliminate() functions were much easier to contemplate and then write as I had already practiced writing 4 other functions at that point so it began to come more naturally.

> Biggest takeaway today: *simple is better*. Is there a more succint way to consider and write this problem?

### April 14, 2020
I began the next project in the Week 3 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) Problem Set called runoff.c. This project has 6 different functions to write to hold a runoff election accurately. 

Today I managed to write 2 of them: 
1. the vote function - This function uses a 2-dimensional array to set each voter's preferrential rank for each candidate to be used in the case of a runoff.
2. the tabulate function - This function first checks the preferred candidate for each voter to see if they are eliminated then adds a vote for the current top candidate choice who is not yet eliminated. 

I also managed to write a little of the next function, print winner. I thus far have written the piece to compute the majority number of votes needed to win the runoff election and will continue with writing this function tomorrow. Ideally I will finish the remaining functions in this program to complete this project tomorrow.

### April 13, 2020
The last few weeks, while most people were transferring to a WFH mode I was "kicked out" of my old office space and mainly using my laptop, but today I re-set up my Raspberry Pi 4 to continue learning in a more Linux-based environment.

Today I worked on the Week 3 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) Problem Set called plurality.c. Most of the program had been written, but we were tasked with writing the "vote" and "print+winner" functions. 

After we learned about different forms or sorting and searching the vote boolean function was fairly easy to write, though I had a "brain fart" and got stuck briefly when I forgot that there was a strcmp function in the `<string.h>` library which would be used for the comparison of whether or not the `vote(string name)` was the same as the `candidates[i].name`. I reached out to peers in the Discord chat and someone quickly reminded me that there are string functions already created that would help me get the function working properly. I surely do appreciate collaboration! A fresh set of eyes can easily pinpoint a silly mistake.

I admittedly did struggle in implementing the print_winner function at first because I knew what I wanted it to do, but wasn't sure initially how to implement it. I spent some time talking to my rubber duckie, Ranger Ron, to work through the problem and determined I needed 2 for loops:
- one loop to determine which value in `candidates[k].votes` was the "max" number of votes (which would also change the "max" to said number) and then
- a second loop to do a linear search to find and then print `if (candidates[k].votes >= max)`. 

Because I sort of just decided to write ">=" in the program, I later wanted to test `if (candidates[k].votes = max)` would work. I quickly found out that it is incorrect because it does not account for the case of a tie. My realization was that `if (candidates[k].votes = max)` stops the linear search algorithm because once it finds the first value that matches it quits, whereas if it is >= it will keep going in the search. At least that is my understanding. If I'm wrong I will surely find out soon!

### April 10-12, 2020
I dove into the Week 3 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) lecture regarding Algorithms. I learned about linear and binary search methods and the *O* or "on the order of" and omega and theta run times to consider when using an algorithm to build a function. Next they covered the different sort options and their best- and worst-case scenario run times, including:
- Selection Sort
- Bubble Sort
- Insertion Sort
- Merge Sort

Finally, the lecture covered recusrion. What is it? How to use it (base and recursive cases)? And how it functions within a Merge Sort. Now I will move onto the Problem Set 3 for this "week" over the next couple of days.

### April 6, 2020
Moving on to the next project in the Week 2 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) Problem Set is the Caesar project. This is an encrypted message problem using THE Caesar's method of manipulating the letter's location.

Strangely enough - though not strange at all in reality because I'm practicing a lot - I'm beginning to understand C much easier and come up with my own solutions more quickly and smoothly I now notice. I was able to write out most of this one with just some referencing of my own notes, a few hints on newer elements and function concepts and understanding the basic concept fairly quickly.

A majority of this solution code was pretty easy to write. I had the hardest time with the "wraparound" part when the ASCII code had to go from 'Z' or 'z' to 'A' or 'a' respectively. In the end I did some funky math workaround, though I'm sure there's a cleaner way to do it. I will likely come back to caesar.c (uploaded in my c-projects folder) and cash1.c after I complete all of my CS50 lessons.

Tomorrow begins Week 3: Algorithms!

### April 4-5, 2020
I spent both days finishing up the 3 "Shorts" videos reviewing Functions, Arrays, and Command-Line Arguments. Then I started working on the first  Week 2 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) Problem Set, readability. This program is supposed to analyze the user's text input to count the letters, words, and sentences in the text and use the Coleman-Liau method to determine the reading "Grade" level.

It took a few iterations to make my new count functions work, but I was able to get each one working correctly.

### April 2, 2020
I finished "Arrays" from the Week 2 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) lecture. Tommorrow I will continue with the 2 "Shorts" that are offered and will begin working on the problem sets for Week 2.

### April 1, 2020
Most of the day I worked on debugging cash1.c, but have not quite found the answer. I feel I'm getting closer though! I also started the Week 2 [CS50 Intro to Computer Science](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/) lecture which is covering "Arrays" and we reviewed the previous lecture highlights.

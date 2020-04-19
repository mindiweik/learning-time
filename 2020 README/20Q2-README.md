# learning-time Q1 2020
Personal projects documenting things I am practicing from what I've recently learned and sharing my research findings in my quest to learn something new about programming each and every day! I mainly use a Macbook Pro and a Raspberry Pi 4 running Raspian.


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
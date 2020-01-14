# Following My Progress and Reflections Reading *"Clean Code: A Handbook of Agile Software Craftsmanship"* by Robert C. Martin

### Chapter 1: Clean Code
As someone new to learning code (and someone who wants to learn to do it well), this book was a great gift to receive so early in my learning process. The first chapter appears to be a great way to set my mentality up for success to become a good programmer.

Having never worked with code "on the job" it was helpful to know a bit more about what to look for and how very important clean code really is. It makes sense that the more "hands in the pot" the messier code may become, especially with a large and ongoing project. But, I've come to see, coding does not need to be this way.

If code is kept clean and precise with good notes there idn't much reason for code to become muddled over time. The best way I can tell to avoid this, whether designing new code or working on old, is to care deeply about the code and keeping it trim and functioning at its best at all times.

Sure, at times there will be tight deadlines with managers and customers chomping at the bit for a new release, but it seems like good programmers also need to learn to stand their ground to keep their code quality as top priority. That's not just to keep their own timing from being rushed, but moreover to keep up the integrity of the code itself. If it starts off sloppy and rushed, it will be harder and harder each time one needs to update or make a change.

I especially liked the section "What Is Clean Code?" where the author shared the definitions of clean code from well-known programmers:

- **Bjarne Stroutstrup:** "Clean code does one thing well." I like this idea of pure simplicity. He also states that clean code is "elegant" which sounds oddly fitting. If the code is well-written it should be hard for bugs to hide, almost disruptive.
- **Grady Booch:** Clean code "...reads like well-written prose." Grady's explanation made me realize that code can actually be *read*! The code is telling a story of the solution to the problem.
- **"Big" Dave Thomas:** Dave indicates that clean code can also be easily changed by *others*. It should be straightforward with one way of doing things that can be replicated.
- **Michael Feathers:** This passage was what really resonated with me on that *caring* perspective I mentioned earlier. Take the time to keep it simple and pay attention to details so others can nurture it, too!
- **Ron Jeffries:** Ron focuses a lot on keeping things minimal from the start, removing duplicates, and making sure that the code runs all of the tests. It is expressive, yet it also performs well.
- **Ward Cunningham:** Ward says it's clean code when you run and call it and get basically what you'd expect. It sounds obvious, but with so much detail that can be hard to achieve. He says it's "beautiful code when the code also makes it look like the language was made for the problem."

The author later goes on to remind the reader that coding is akin to being an author yourself. Others will be reading your code and it's our responsibility to communicate clearly. Overall, my favorite takeaway was the idea of applying the Boy Scout Rule to code: "leave the campground cleaner than you found it and I love this sentiment. I had not considered this could be applied to a project where many others can get in and mess around with the same code. I will definitely keep this in mind as I move forward! 


### Chapter 2: Meaningful Names
This chapter, although seemingly common sense, is great for a beginner to see. Some names have words that are meaningless when working with code like Data, Manager, Processor, and Info which are akin to a, the, and and in the English language. It's also important to note that naming is important because it is used throughout the coding process. Names need to be readable, consistent, and intentional/filled with meaning. Another thing I learned is that although it is recommended to strive for clean and concise code, that doesn't mean one should sacrifice meaningful names in the process as it's clearly very important. 

Additionally, Robert states that one should avoid puns (whether trying to be funny or just using words with multiple meanings like add) and being "cute" using slang or inside jokes. One should also avoid disinformation and use clear descriptors as they also need to be searchable and easy to find for others working with the code. He recommends that class names should be nouns or noun phrases and method names should be verbs or verb phrases.

Ideally we should use one word per concept when naming so we should choose carefully. *"The hardest thing about choosing good names is that it requires good descriptive skills and a shared cultural background."* It can be hard to find this in a highly diverse workforce, so it's best to stick to a very pragmatic naming approach using computer science terms, algorithm names, pattern names, math terms, etc.
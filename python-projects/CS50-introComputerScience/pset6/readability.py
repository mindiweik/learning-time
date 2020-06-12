from cs50 import get_string

# prompt user input
text = get_string("Text: ")

# letter count
letter_count = 0
for i in range(len(text)):
    if text[i].isalpha():
        letter_count += 1

# word count
word_count = 1
for j in range(len(text)):
    if text[j].isspace():
        word_count += 1

# sentence count
sentence_count = 0
for k in range(len(text)):
    if text[k] == '.' or text[k] == '!' or text[k] == '?':
        sentence_count += 1

# averages of L and S for Coleman-Liau method
L = (letter_count / word_count) * 100
S = (sentence_count / word_count) * 100

# Conduct Coleman-Liau method
index = (0.0588 * L - 0.296 * S - 15.8)
index = round(index)
level = index

# Return/Print Grade Level
# if level is > 16 = "Grade 16+"
# if level is < 1 = "Before Grade 1"
# else = "Grade X" where X = level
if index >= 16:
    print("Grade 16+\n")
elif index < 1:
    print("Before Grade 1\n")
else:
    print(f"Grade {level}\n")

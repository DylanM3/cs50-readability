from cs50 import get_string

text = get_string("Text: ")
textLen = len(text)

# Define letters for later use
letters = 0

# For every alphabetic letter in the text, add one to letters
for i in range(textLen):
    if text[i].isalpha():
        letters += 1

# Define words for later use
words = 1

for i in range(textLen):
    if text[i] == ' ':
        words += 1

punctuation = ['.', '!', '?']
sentences = 0

# For every form of punctuation in the text, increment the sentence count
for i in range(textLen):
    for j in range(len(punctuation)):
        if text[i] == punctuation[j]:
            sentences += 1

# Calculate the average
L = float(letters) / float(words) * 100
S = float(sentences) / float(words) * 100

# Compute the Coleman-Liau index
index = 0.0588 * L - 0.296 * S - 15.8
answer = round(index)

# Print correct grade level
if answer < 0:
    print("Before Grade 1")
elif answer > 16:
    print("Grade 16+")
else:
    print(f"Grade {answer}")

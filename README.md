# CS50 Readability
A command-line readability calculator written in C and Python that analyses a piece of text and estimates its reading grade level using the Coleman-Liau index.

## Features:
- Letter Counting: Counts the number of alphabetical characters in the supplied text.
- Word Counting: Calculates the total number of words in the supplied text.
- Sentence Counting: Identifies sentences using full stops, exclamation marks, and question marks.
- Coleman-Liau Index: Calculates the readability score using the average number of letters and sentences per 100 words.
- Grade Level Output: Converts the calculated index into an estimated US school grade level.
- Grade Boundaries: Displays `Before Grade 1` for lower scores and `Grade 16+` for scores above 16.

## C Implementation:
- Character Classification: Uses `isalpha()` to identify alphabetical characters.
- Word Counting: Identifies words by detecting spaces between them.
- Sentence Counting: Uses punctuation marks to determine the number of sentences.
- Readability Calculation: Calculates the Coleman-Liau index using the average number of letters and sentences per 100 words.
- Grade Output: Rounds the calculated index and displays the corresponding grade level.

## Python Implementation:
- User Input: Uses the CS50 `get_string()` function to collect text from the user.
- Letter Counting: Uses Python's `isalpha()` method to identify and count alphabetical characters.
- Word Counting: Counts spaces in the supplied text to determine the total number of words.
- Sentence Counting: Iterates through the text and checks for full stops, exclamation marks, and question marks.
- Readability Calculation: Calculates the Coleman-Liau index using the average number of letters and sentences per 100 words.
- Grade Output: Uses Python's `round()` function to determine the grade level and displays the appropriate result.

#

- [CS50 Readability (C)](https://cs50.harvard.edu/x/2025/psets/2/readability/)
- [CS50 Readability (Python)](https://cs50.harvard.edu/x/2025/psets/6/readability/)

# CS50 Readability
A command-line readability calculator written in the C programming language that analyses a piece of text and estimates its reading grade level using the Coleman-Liau index.

## Features:
- Letter Counting: Counts the number of alphabetical characters using `isalpha()`.
- Word Counting: Calculates the total number of words in the supplied text.
- Sentence Counting: Identifies sentences using full stops, exclamation marks, and question marks.
- Coleman-Liau Index: Calculates the readability score using the average number of letters and sentences per 100 words.
- Grade Level Output: Converts the calculated index into an estimated US school grade level.
- Grade Boundaries: Displays `Before Grade 1` for scores below 1 and `Grade 16+` for scores above 16.

#

Developed as apart of the curriculum for [Harvard University's CS50X: Introduction to Computer Science](https://cs50.harvard.edu/x/2025/psets/2/readability/)

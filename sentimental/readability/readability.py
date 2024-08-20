from cs50 import get_string

#getting promp from user


text = get_string("Text: ")

# counting the letters in text


def count_letters(letters):
    no_letters = 0
    for character in letters:
        if character.isalpha():
            no_letters += 1
    return no_letters


letters = count_letters(text)

# counting the words in text


def count_words(words):
    words = words.split()
    no_words = len(words)
    return no_words
 
 
words = count_words(text)

# counting the number of snetences in text


def count_sentences(sentences):
    no_sentences = sentences.count(".") + sentences.count("!") + sentences.count ("?")
    return no_sentences


sentences = count_sentences(text)
# checking Coleman-Liau index


l = letters / words * 100
s = sentences / words * 100
index = 0.0588 * l - 0.296 * s - 15.8
#rounding the value 

grade = round(index)
#printing the grade according to index

if grade >= 16:
    print("Grade 16+")
elif grade < 1:
    print("Before Grade 1")
else:
    print(f"Grade {grade}")
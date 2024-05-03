import string

def xref(filename) :
    line = ''
    lines = {}
    with open(filename) as f :
for num, text in enumerate(f, 1) :
    if len(text.strip()) == 0 :
        continue
        if text.strip().count(' ') == 0 : # Only one word
            line = text.strip()
            if line not in lines :
lines[line] = [num]
            else:
lines[line].append(num)
        else:
words = text.split()
for word in words :
word = word.strip(string.punctuation)
if word not in lines :
lines[word] = [num]
else :
    if num not in lines[word] :
        lines[word].append(num)
        return lines

        filename = "your_file.txt"  # Change this to your filename
        result = xref(filename)
        print(result)

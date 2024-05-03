import re

def find_urls(filename) :
    url_lines = {}
    with open(filename) as f :
for num, text in enumerate(f, 1) :
    urls = re.findall(r'http[s]?://(?:[a-zA-Z]|[0-9]|[$-_@.&+]|[!*\\(\\),]|(?:%[0-9a-fA-F][0-9a-fA-F]))+', text)
    for url in urls :
if url not in url_lines :
url_lines[url] = [num]
else :
    url_lines[url].append(num)
    return url_lines

    filename = "your_file.txt"  # Change this to your filename
    result = find_urls(filename)
    for url, lines in result.items() :
        print("URL:", url)
        print("Lines:", lines)

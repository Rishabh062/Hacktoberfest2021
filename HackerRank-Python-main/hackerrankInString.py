def hackerrankInString(s):
    word_to_find = 'hackerrank'
    i = 0
    for letter in s:
        if letter == word_to_find[i]:
            i += 1
        if i == len(word_to_find):
            break
             
    if i == len(word_to_find):
        return "YES"
    else: 
        return "NO"

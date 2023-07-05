

def Remove_multiple_occurances(text):
    seen = set()
    result = ""
    for i in text:
        if i not in seen:
            seen.add(i)
            result += i
    print(result)

def delete_frist_occurance(text):
    seen = set()
    result = ""
    for i in range(len(text)):
        for j in range(i+1,len(text)):
            print(i, "  ", j)
            if text[i] == text[j]:
                print(i)
                new_text = text[:i]  + text[i + 1:]
                text = new_text
                break
    print(new_text)


msg = input("Enter the text : ")
Remove_multiple_occurances(msg)
delete_frist_occurance(msg)


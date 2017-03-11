import os

# contains doc string of each file as a dict, with key being file name and
# value being the doc string
doc_dict = {}

for files in os.listdir('src'):
    with open(os.path.join(os.getcwd(), 'src', files)) as f:
        doc_str = []
        for lines in f.readlines():
            if lines.strip().startswith('//'):
                doc_str.append((lines.strip()[2:]).strip())
            else: break
        doc_str = ' '.join(doc_str)

        doc_dict[files] = doc_str

doc_str = ""

for key, value in doc_dict.items():
    doc_str += "\n|[{}](https://github.com/meetmangukiya/FCP/blob/master/src/{})|{}|".format(key, key, value)

doc_str = """
|Filename|Description|
|--------|-----------|""" + doc_str

with open('README.md', 'w') as f:
    with open('read.md') as tmp:
        f.write(tmp.read())
    f.write("\n# Doc")
    f.write(doc_str)

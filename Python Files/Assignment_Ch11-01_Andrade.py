import re

str="""
>Venues
>Marketing
>medalists
>Controversies
>Paralympics
>snowboarding
>[1]
>Netherlands
>[2]
>Norway
>[10]
>[11]
>References
>edit
>[12]
>Norway
>[]
>Canada
>Netherlands
>[abc]
>Italy
>Belarus
>China
>Slovakia
<$#%#$%
<#$#$$
<**&&^^
>Slovenia
>Belgium
>Spain
>Kazakhstan
)>[15]
>[12
>1964
>1968
>1972
>1992
>1996
>2000"""

#Type your answer here: ^>\[[0-9]+]$

data = re.findall('^>\[[0-9]+]$', str, re.MULTILINE)

print(data)
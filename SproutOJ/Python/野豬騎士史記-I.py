# Sprout OJ No.3045-野豬騎士史記 I
a = input()
b = input()
first = b.find("/")
second = b.find("/",first+1)

y_pos = a.find("yy")
m_pos = a.find("mm")
d_pos = a.find("dd")
if y_pos < m_pos and y_pos < d_pos:
    if m_pos < d_pos:
        yy = b[:first]
        mm = b[first+1:second]
        dd = b[second+1:]
    else:
        yy = b[:first]
        dd = b[first+1:second]
        mm = b[second+1:]
elif m_pos < y_pos and m_pos < d_pos:
    if y_pos < d_pos:
        mm = b[:first]
        yy = b[first+1:second]
        dd = b[second+1:]
    else:
        mm = b[:first]
        dd = b[first+1:second]
        yy = b[second+1:]
else:
    if y_pos < m_pos:
        dd = b[:first]
        yy = b[first+1:second]
        mm = b[second+1:]
    else:
        dd = b[:first]
        mm = b[first+1:second]
        yy = b[second+1:]
print(yy + "/" + mm + "/" + dd)
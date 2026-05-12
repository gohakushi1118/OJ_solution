# Sprout OJ No.3046-西瓜的名字
name = input().lower()
article = str(input().lower())
article = article.replace(","," ")
article = article.replace("."," ")
article = article.split()
print(article.count(name))